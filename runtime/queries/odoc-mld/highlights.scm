; Headings
(heading
  "{" @markup.heading
  level: (heading_level) @constant.numeric
  "}" @markup.heading)

(heading_content) @markup.heading

; Code blocks: delimiters vs content
(code_block
  "{[" @markup.raw.block
  "]}" @markup.raw.block)

; Tagged code blocks: {@lang[ ... ]}
(tagged_code_block
  "{" @markup.raw.block
  "@" @operator
  language: (code_language) @label
  "[" @markup.raw.block
  "]}" @markup.raw.block)

(code_content) @markup.raw.block

; Verbatim blocks: delimiters vs content
(verbatim_block
  "{v" @markup.raw.block
  "v}" @markup.raw.block)
(verbatim_content) @markup.raw.block

; Inline code
(inline_code
  "[" @markup.raw.inline
  "]" @markup.raw.inline)
(inline_code_content) @markup.raw.inline

; Bold
(bold
  "{b" @markup.bold
  "}" @markup.bold)
(bold
  content: (_) @markup.bold)

; Italic
(italic
  "{i" @markup.italic
  "}" @markup.italic)
(italic
  content: (_) @markup.italic)

; Emphasis
(emph
  "{e" @markup.italic
  "}" @markup.italic)
(emph
  content: (_) @markup.italic)

; References
(ref
  "{" @markup.link
  "!" @operator
  id: (ref_id) @markup.link.url
  "}" @markup.link)

(ref_with_text
  "!" @operator
  id: (ref_id) @markup.link.url)
(ref_with_text
  "{" @markup.link
  "}" @markup.link)
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
  ":" @operator
  url: (link_url) @markup.link.url)
(link
  "{" @markup.link
  "}" @markup.link)

; Math
(math_block
  "{math" @markup.raw
  "}" @markup.raw)
(math_content) @markup.raw

(math_inline
  "{m" @markup.raw
  "}" @markup.raw)
