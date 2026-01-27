; Headings
(heading
  "{" @markup.heading
  level: (heading_level) @constant.numeric
  "}" @markup.heading)

(heading_content) @markup.heading

; Code blocks: delimiters vs content
(code_block
  "{[" @punctuation.delimiter
  "]}" @punctuation.delimiter)
(code_content) @markup.raw.block

; Verbatim blocks: delimiters vs content
(verbatim_block
  "{v" @punctuation.delimiter
  "v}" @punctuation.delimiter)
(verbatim_content) @markup.raw.block

; Inline code
(inline_code
  "[" @punctuation.bracket
  "]" @punctuation.bracket)
(inline_code_content) @markup.raw.inline

; Bold
(bold
  "{b" @markup.bold
  "}" @punctuation.bracket)
(bold
  content: (_) @markup.bold)

; Italic
(italic
  "{i" @markup.italic
  "}" @punctuation.bracket)
(italic
  content: (_) @markup.italic)

; Emphasis
(emph
  "{e" @markup.italic
  "}" @punctuation.bracket)
(emph
  content: (_) @markup.italic)

; References
(ref
  "{!" @punctuation.delimiter
  id: (ref_id) @markup.link.url
  "}" @punctuation.delimiter)

(ref_with_text
  "{{!" @punctuation.delimiter
  id: (ref_id) @markup.link.url
  "}" @punctuation.delimiter)
(ref_with_text
  text: (_) @markup.link.text)

; Lists — plain
(ul_bullet) @markup.list.unnumbered
(ol_number) @markup.list.numbered

; Lists — tagged {ul ...} / {ol ...}
(tagged_ul
  "{ul" @markup.list.unnumbered
  "}" @markup.list.unnumbered)
(tagged_ol
  "{ol" @markup.list.numbered
  "}" @markup.list.numbered)
(list_item
  "{-" @markup.list.unnumbered
  "}" @markup.list.unnumbered)

; Links
(link
  "{{:" @markup.link
  url: (link_url) @markup.link.url
  "}" @markup.link)


; Math
(math_block
  "{math" @punctuation.delimiter
  "}" @punctuation.delimiter)
(math_content) @markup.raw

(math_inline
  "{m" @punctuation.delimiter
  "}" @punctuation.delimiter)
