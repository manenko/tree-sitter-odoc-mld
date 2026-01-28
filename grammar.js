/// <reference types="tree-sitter-cli/dsl" />
// Tree-sitter grammar for OCaml odoc .mld files
//
// odoc markup is NOT Markdown. It uses {tag ...} delimiters for structured
// content, [code] for inline code, and {[ ... ]} for code blocks.

module.exports = grammar({
  name: "odoc_mld",

  // Only horizontal whitespace is automatic; newlines are explicit
  extras: () => [/[ \t]/],

  conflicts: () => [],

  rules: {
    // Top-level document: blocks separated by newlines
    document: ($) =>
      repeat($._block_line),

    _block_line: ($) =>
      seq(optional($._block), $._newline),

    _newline: () => /\r?\n/,

    _block: ($) =>
      choice(
        $.heading,
        $.code_block,
        $.tagged_code_block,
        $.verbatim_block,
        $.math_block,
        $.ul_item,
        $.ol_item,
        $.modules_directive,
        $.indexlist_directive,
        $.tag,
        $.paragraph,
      ),

    // Paragraph: one line of inline content (fallback)
    paragraph: ($) => prec(-1, repeat1($._inline)),

    // ---------------------------------------------------------------
    // A) Headings: {0 Title} .. {4 Title}, optional label {0:label Title}
    // ---------------------------------------------------------------
    heading: ($) =>
      seq(
        "{",
        field("level", $.heading_level),
        optional(field("label", $.heading_label)),
        field("content", $.heading_content),
        "}",
      ),

    heading_level: () => /[0-4]/,

    heading_label: () => token(prec(1, /:[a-zA-Z0-9_-]+/)),

    heading_content: ($) => repeat1($._inline),

    // ---------------------------------------------------------------
    // B) Code blocks:
    //    Plain:  {[ ... ]}         (defaults to OCaml)
    //    Tagged: {@lang[ ... ]}    (specified language)
    // ---------------------------------------------------------------
    code_block: ($) =>
      seq("{[", optional(field("content", $.code_content)), "]}"),

    tagged_code_block: ($) =>
      seq(
        "{",
        "@",
        field("language", $.code_language),
        "[",
        optional(field("content", $.code_content)),
        "]}",
      ),

    code_language: () => /[a-zA-Z][a-zA-Z0-9_-]*/,

    // Match everything up to ]} including newlines
    code_content: () => token(prec(-1, /([^\]]|\][^}]|\r?\n)+/)),

    // ---------------------------------------------------------------
    // C) Verbatim blocks: {v ... v}
    // ---------------------------------------------------------------
    verbatim_block: ($) =>
      seq("{v", optional(field("content", $.verbatim_content)), "v}"),

    verbatim_content: () => token(prec(-1, /([^v]|v[^}]|\r?\n)+/)),

    // ---------------------------------------------------------------
    // D) Inline code: [ ... ]
    // ---------------------------------------------------------------
    inline_code: ($) => seq("[", optional($.inline_code_content), "]"),

    inline_code_content: () => /[^\]\n]+/,

    // ---------------------------------------------------------------
    // E) Inline markup: {b ...} {i ...} {e ...} {^ ...} {_ ...}
    //    {C ...} {L ...} {R ...}
    // ---------------------------------------------------------------
    bold: ($) =>
      seq("{b", field("content", repeat1($._inline)), "}"),

    italic: ($) =>
      seq("{i", field("content", repeat1($._inline)), "}"),

    emph: ($) =>
      seq("{e", field("content", repeat1($._inline)), "}"),

    superscript: ($) =>
      seq("{^", field("content", repeat1($._inline)), "}"),

    subscript: ($) =>
      seq("{_", field("content", repeat1($._inline)), "}"),

    center: ($) =>
      seq("{C", field("content", repeat1($._inline)), "}"),

    left: ($) =>
      seq("{L", field("content", repeat1($._inline)), "}"),

    right: ($) =>
      seq("{R", field("content", repeat1($._inline)), "}"),

    // ---------------------------------------------------------------
    // F) References: {!id} and {{!id} display text}
    // ---------------------------------------------------------------
    ref: ($) => seq("{", "!", field("id", $.ref_id), "}"),

    ref_with_text: ($) =>
      seq(
        "{",
        "{",
        "!",
        field("id", $.ref_id),
        "}",
        field("text", repeat1($._inline)),
        "}",
      ),

    ref_id: () => /[^}\s]+/,

    // ---------------------------------------------------------------
    // F2) Links: {{: url} display text}
    // ---------------------------------------------------------------
    link: ($) =>
      seq(
        "{",
        "{",
        ":",
        field("url", $.link_url),
        "}",
        field("text", repeat1(choice($._inline, $._newline))),
        "}",
      ),

    link_url: () => /[^}\s]+/,

    // ---------------------------------------------------------------
    // G) Lists
    //    Plain:   - item  /  1. item  (single line)
    //    Tagged:  {ul {- item} ...}  /  {ol {- item} ...}
    // ---------------------------------------------------------------
    ul_item: ($) =>
      seq($.ul_bullet, repeat1($._inline)),

    ul_bullet: () => "- ",

    ol_item: ($) =>
      seq($.ol_number, repeat1($._inline)),

    ol_number: () => /[0-9]+\. /,

    tagged_ul: ($) =>
      seq("{ul", repeat1($.list_item), "}"),

    tagged_ol: ($) =>
      seq("{ol", repeat1($.list_item), "}"),

    list_item: ($) =>
      choice(
        seq("{", $.list_dash, repeat1($._inline), "}"),
        seq("{li", repeat1($._inline), "}"),
      ),

    list_dash: () => token.immediate("-"),

    // ---------------------------------------------------------------
    // H) Math: {math ... } and {m ...}
    //    math_block content may span multiple lines.
    // ---------------------------------------------------------------
    math_block: ($) =>
      seq("{math", optional(field("content", $.math_content)), "}"),

    math_inline: ($) =>
      seq("{m", field("content", $.math_content), "}"),

    // Allow one level of nested braces and newlines (e.g. e^{-x})
    math_content: () => /([^{}\r\n]|\{[^}]*\}|\r?\n)+/,

    // ---------------------------------------------------------------
    // I) Escape sequences: \{ \} \[ \] \@
    // ---------------------------------------------------------------
    escape_sequence: () => token(prec(1, /\\[{}\[\]@]/)),

    // ---------------------------------------------------------------
    // J) Target-specific content: {% string %} and {%target: string %}
    // ---------------------------------------------------------------
    target_specific: ($) =>
      seq(
        "{%",
        optional(seq(field("target", $.target_name), ":")),
        field("content", $.target_content),
        "%}",
      ),

    target_name: () => /[a-zA-Z][a-zA-Z0-9_-]*/,
    target_content: () => token(prec(-1, /([^%]|%[^}]|\r?\n)+/)),

    // ---------------------------------------------------------------
    // K) Directives: {!modules: ...} and {!indexlist}
    // ---------------------------------------------------------------
    modules_directive: ($) =>
      seq("{!modules:", field("modules", repeat1($.module_name)), "}"),

    module_name: () => /[A-Za-z_][A-Za-z0-9_.']*/,

    indexlist_directive: () => "{!indexlist}",

    // ---------------------------------------------------------------
    // L) Media elements: {image:path}, {video:path}, {audio:path}
    //    and with text: {{image:path} alt text}
    // ---------------------------------------------------------------
    media: ($) => choice($.media_simple, $.media_with_text),

    media_simple: ($) =>
      choice(
        seq("{image:", field("source", $.media_source), "}"),
        seq("{image!", field("source", $.media_source), "}"),
        seq("{video:", field("source", $.media_source), "}"),
        seq("{video!", field("source", $.media_source), "}"),
        seq("{audio:", field("source", $.media_source), "}"),
        seq("{audio!", field("source", $.media_source), "}"),
      ),

    media_with_text: ($) =>
      choice(
        seq("{{image:", field("source", $.media_source), "}", field("text", repeat1($._inline)), "}"),
        seq("{{image!", field("source", $.media_source), "}", field("text", repeat1($._inline)), "}"),
        seq("{{video:", field("source", $.media_source), "}", field("text", repeat1($._inline)), "}"),
        seq("{{video!", field("source", $.media_source), "}", field("text", repeat1($._inline)), "}"),
        seq("{{audio:", field("source", $.media_source), "}", field("text", repeat1($._inline)), "}"),
        seq("{{audio!", field("source", $.media_source), "}", field("text", repeat1($._inline)), "}"),
      ),

    media_source: () => /[^}\s]+/,

    // ---------------------------------------------------------------
    // M) @-tags: documentation metadata
    // ---------------------------------------------------------------
    tag: ($) => choice(
      $.author_tag, $.since_tag, $.version_tag,
      $.deprecated_tag, $.return_tag,
      $.param_tag, $.raise_tag, $.before_tag,
      $.see_tag, $.hint_tag,
    ),

    author_tag: ($) => seq("@author", field("value", $.tag_text)),
    since_tag: ($) => seq("@since", field("value", $.tag_text)),
    version_tag: ($) => seq("@version", field("value", $.tag_text)),

    deprecated_tag: ($) => seq("@deprecated", field("text", repeat1($._inline))),
    return_tag: ($) => seq(choice("@return", "@returns"), field("text", repeat1($._inline))),

    param_tag: ($) => seq("@param", field("name", $.param_name), field("text", repeat1($._inline))),
    raise_tag: ($) => seq(choice("@raise", "@raises"), field("name", $.exception_name), field("text", repeat1($._inline))),
    before_tag: ($) => seq("@before", field("version", $.word), field("text", repeat1($._inline))),

    see_tag: ($) => seq("@see", field("ref", $.see_ref), field("text", repeat1($._inline))),
    see_ref: () => choice(/<[^>]+>/, /'[^']+'/, /"[^"]+"/),

    hint_tag: () => choice("@open", "@closed", "@inline", "@canonical"),

    tag_text: () => /[^\r\n]+/,
    param_name: () => /[a-zA-Z_][a-zA-Z0-9_']*/,
    exception_name: () => /[A-Za-z_][A-Za-z0-9_.']*/,

    // ---------------------------------------------------------------
    // Inline elements
    // ---------------------------------------------------------------
    _inline: ($) =>
      choice(
        $.bold,
        $.italic,
        $.emph,
        $.superscript,
        $.subscript,
        $.center,
        $.left,
        $.right,
        $.inline_code,
        $.ref,
        $.ref_with_text,
        $.link,
        $.math_inline,
        $.tagged_ul,
        $.tagged_ol,
        $.escape_sequence,
        $.target_specific,
        $.media,
        $.word,
      ),

    // Plain text — anything not a special delimiter or newline
    word: () => /[^\s{}\[\]\\@]+/,
  },
});
