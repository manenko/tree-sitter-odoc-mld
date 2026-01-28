; Headings
(heading
  "{" @punctuation.bracket
  level: (heading_level) @constant.numeric
  "}" @punctuation.bracket)

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
  "{-" @punctuation.bracket
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
