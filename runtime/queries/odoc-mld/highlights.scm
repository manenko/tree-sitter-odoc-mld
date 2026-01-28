; Headings
(heading
  "{" @punctuation.bracket
  level: (heading_level) @constant.numeric
  "}" @punctuation.bracket)

(heading
  label: (heading_label) @label)

(heading_content) @markup.heading

; Code blocks: delimiters vs content
(code_block
  "{[" @punctuation.bracket
  "]}" @punctuation.bracket)

; Tagged code blocks: {@lang[ ... ]}
(tagged_code_block
  "{" @punctuation.bracket
  "@" @operator
  language: (code_language) @label
  "[" @punctuation.bracket
  "]}" @punctuation.bracket)

(code_content) @markup.raw.block

; Verbatim blocks: delimiters vs content
(verbatim_block
  "{v" @punctuation.bracket
  "v}" @punctuation.bracket)
(verbatim_content) @markup.raw.block

; Inline code
(inline_code
  "[" @punctuation.bracket
  "]" @punctuation.bracket)
(inline_code_content) @markup.raw.inline

; Bold
(bold
  "{b" @punctuation.bracket
  "}" @punctuation.bracket)
(bold
  content: (_)+ @markup.bold)

; Italic
(italic
  "{i" @punctuation.bracket
  "}" @punctuation.bracket)
(italic
  content: (_)+ @markup.italic)

; Emphasis
(emph
  "{e" @punctuation.bracket
  "}" @punctuation.bracket)
(emph
  content: (_)+ @markup.italic)

; Superscript
(superscript
  "{^" @punctuation.bracket
  "}" @punctuation.bracket)
(superscript
  content: (_)+ @markup)

; Subscript
(subscript
  "{_" @punctuation.bracket
  "}" @punctuation.bracket)
(subscript
  content: (_)+ @markup)

; Center alignment
(center
  "{C" @punctuation.bracket
  "}" @punctuation.bracket)

; Left alignment
(left
  "{L" @punctuation.bracket
  "}" @punctuation.bracket)

; Right alignment
(right
  "{R" @punctuation.bracket
  "}" @punctuation.bracket)

; References
(ref
  "{" @punctuation.bracket
  "!" @operator
  id: (ref_id) @markup.link.url
  "}" @punctuation.bracket)

(ref_with_text
  "!" @operator
  id: (ref_id) @markup.link.url)
(ref_with_text
  "{" @punctuation.bracket
  "}" @punctuation.bracket)
(ref_with_text
  text: (_)+ @markup.link.text)

; Lists — plain
(ul_bullet) @markup.list.unnumbered
(ol_number) @markup.list.numbered

; Lists — tagged {ul ...} / {ol ...}
(tagged_ul
  "{ul" @punctuation.bracket
  "}" @punctuation.bracket)
(tagged_ol
  "{ol" @punctuation.bracket
  "}" @punctuation.bracket)
(list_item
  "{" @punctuation.bracket
  (list_dash) @markup.list.unnumbered
  "}" @punctuation.bracket)
(list_item
  "{li" @punctuation.bracket
  "}" @punctuation.bracket)

; Links
(link
  ":" @operator
  url: (link_url) @markup.link.url)
(link
  "{" @punctuation.bracket
  "}" @punctuation.bracket)

; Math
(math_block
  "{math" @punctuation.bracket
  "}" @punctuation.bracket)
(math_content) @markup.raw

(math_inline
  "{m" @punctuation.bracket
  "}" @punctuation.bracket)

; Escape sequences
(escape_sequence) @string.escape

; Target-specific content
(target_specific
  "{%" @punctuation.bracket
  "%}" @punctuation.bracket)
(target_specific
  target: (target_name) @label
  ":" @operator)
(target_content) @markup.raw

; Modules directive
(modules_directive
  "{!modules:" @keyword.directive
  "}" @punctuation.bracket)
(module_name) @module

; Index list directive
(indexlist_directive) @keyword.directive

; Media elements
(media_simple
  "}" @punctuation.bracket)
(media_simple
  "{image:" @punctuation.bracket)
(media_simple
  "{image!" @punctuation.bracket)
(media_simple
  "{video:" @punctuation.bracket)
(media_simple
  "{video!" @punctuation.bracket)
(media_simple
  "{audio:" @punctuation.bracket)
(media_simple
  "{audio!" @punctuation.bracket)
(media_simple
  source: (media_source) @markup.link.url)

(media_with_text
  "}" @punctuation.bracket)
(media_with_text
  "{{image:" @punctuation.bracket)
(media_with_text
  "{{image!" @punctuation.bracket)
(media_with_text
  "{{video:" @punctuation.bracket)
(media_with_text
  "{{video!" @punctuation.bracket)
(media_with_text
  "{{audio:" @punctuation.bracket)
(media_with_text
  "{{audio!" @punctuation.bracket)
(media_with_text
  source: (media_source) @markup.link.url)
(media_with_text
  text: (_)+ @markup.link.text)

; @-tags
(author_tag
  "@author" @keyword)
(author_tag
  value: (tag_text) @string)

(since_tag
  "@since" @keyword)
(since_tag
  value: (tag_text) @string)

(version_tag
  "@version" @keyword)
(version_tag
  value: (tag_text) @string)

(deprecated_tag
  "@deprecated" @keyword)

(return_tag
  "@return" @keyword)
(return_tag
  "@returns" @keyword)

(param_tag
  "@param" @keyword)
(param_tag
  name: (param_name) @variable.parameter)

(raise_tag
  "@raise" @keyword)
(raise_tag
  "@raises" @keyword)
(raise_tag
  name: (exception_name) @type)

(before_tag
  "@before" @keyword)
(before_tag
  version: (word) @string)

(see_tag
  "@see" @keyword)
(see_tag
  ref: (see_ref) @markup.link.url)

(hint_tag) @keyword
