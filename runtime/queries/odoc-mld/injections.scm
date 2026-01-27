; Inject OCaml into plain {[ ... ]} code blocks
((code_block
  (code_content) @injection.content)
 (#set! injection.language "ocaml"))

; Inject specified language into {@lang[ ... ]} code blocks
((tagged_code_block
  language: (code_language) @injection.language
  content: (code_content) @injection.content))
