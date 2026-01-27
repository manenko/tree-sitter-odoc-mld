/// <reference types="tree-sitter-cli/dsl" />
// Tree-sitter grammar for OCaml odoc .mld files
//
// odoc markup is NOT Markdown. It uses {tag ...} delimiters for structured
// content, [code] for inline code, and {[ ... ]} for code blocks.

module.exports = grammar({
  name: "odoc_mld",

  // Only horizontal whitespace is automatic; newlines are explicit
  extras: () => [/[ \t]/],

  conflicts: ($) => [
    [$.paragraph],
    [$.ul_item],
    [$.ol_item],
    [$.ul_item, $.paragraph],
    [$.ol_item, $.paragraph],
  ],

  rules: {
    // Top-level document: sequence of blocks separated by newlines
    document: ($) => repeat(choice($._block, $._newline)),

    _newline: () => /\r?\n/,

    _block: ($) =>
      choice(
        $.heading,
        $.code_block,
        $.verbatim_block,
        $.math_block,
        $.ul_item,
        $.ol_item,
        $.paragraph,
      ),

    // Paragraph: one line of inline content (fallback)
    paragraph: ($) => prec(-1, repeat1($._inline)),

    // ---------------------------------------------------------------
    // A) Headings: {0 Title} .. {4 Title}
    // ---------------------------------------------------------------
    heading: ($) =>
      seq(
        "{",
        field("level", $.heading_level),
        field("content", $.heading_content),
        "}",
      ),

    heading_level: () => /[0-4]/,

    heading_content: ($) => repeat1($._inline),

    // ---------------------------------------------------------------
    // B) Code blocks: {[ ... ]}
    //    Content is raw OCaml code. Newlines are part of the content.
    // ---------------------------------------------------------------
    code_block: ($) =>
      seq("{[", optional(field("content", $.code_content)), "]}"),

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
    // E) Inline markup: {b ...} {i ...} {e ...}
    //    These may nest arbitrarily.
    // ---------------------------------------------------------------
    bold: ($) =>
      seq("{b", field("content", repeat1($._inline)), "}"),

    italic: ($) =>
      seq("{i", field("content", repeat1($._inline)), "}"),

    emph: ($) =>
      seq("{e", field("content", repeat1($._inline)), "}"),

    // ---------------------------------------------------------------
    // F) References: {!id} and {{!id} display text}
    // ---------------------------------------------------------------
    ref: ($) => seq("{!", field("id", $.ref_id), "}"),

    ref_with_text: ($) =>
      seq(
        "{{!",
        field("id", $.ref_id),
        "}",
        field("text", repeat1($._inline)),
        "}",
      ),

    ref_id: () => /[^}\s]+/,

    // ---------------------------------------------------------------
    // G) Lists
    //    Unordered: - item  (single line)
    //    Ordered:   1. item (single line)
    // ---------------------------------------------------------------
    ul_item: ($) =>
      seq($.ul_bullet, repeat1($._inline)),

    ul_bullet: () => "- ",

    ol_item: ($) =>
      seq($.ol_number, repeat1($._inline)),

    ol_number: () => /[0-9]+\. /,

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
    // Inline elements
    // ---------------------------------------------------------------
    _inline: ($) =>
      choice(
        $.bold,
        $.italic,
        $.emph,
        $.inline_code,
        $.ref,
        $.ref_with_text,
        $.math_inline,
        $.word,
      ),

    // Plain text — anything not a special delimiter or newline
    word: () => /[^\s{}\[\]]+/,
  },
});
