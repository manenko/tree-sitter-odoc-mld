# tree-sitter-odoc-mld

A [Tree-sitter](https://tree-sitter.github.io/) grammar for OCaml odoc `.mld` files.

odoc markup is **not** Markdown. It uses `{tag ...}` delimiters for structured content, `[code]` for inline code, and `{[ ... ]}` for OCaml code blocks.

## Supported constructs

| Construct | Syntax | Node type |
|-----------|--------|-----------|
| Headings | `{0 Title}` .. `{4 Title}` | `heading` |
| Code blocks | `{[ ... ]}` | `code_block` / `code_content` |
| Verbatim | `{v ... v}` | `verbatim_block` / `verbatim_content` |
| Inline code | `[ ... ]` | `inline_code` |
| Bold | `{b ...}` | `bold` |
| Italic | `{i ...}` | `italic` |
| Emphasis | `{e ...}` | `emph` |
| Reference | `{!id}` | `ref` |
| Ref with text | `{{!id} text}` | `ref_with_text` |
| Unordered list | `- item` | `ul_item` |
| Ordered list | `1. item` | `ol_item` |
| Block math | `{math ...}` | `math_block` |
| Inline math | `{m ...}` | `math_inline` |

## Example input

```
{0 My library}

This library provides {b fast} and {i safe} primitives.

{1 Overview}

{[
let rec fib n =
  if n <= 1 then 1
  else fib (n - 1) + fib (n - 2)
]}

See {!Map} and {{!List.map} map} for details.

- First item with {i emphasis}
- Second item with [inline code]

{m a^2 + b^2 = c^2}
```

## Build

```sh
npm install
tree-sitter generate
```

## Test

```sh
tree-sitter test
```

## Parse a file

```sh
tree-sitter parse example.mld
```

## Helix integration

Add the following to your `languages.toml`:

```toml
[[language]]
name = "odoc-mld"
scope = "source.odoc_mld"
file-types = ["mld"]
roots = []
comment-token = ""
indent = { tab-width = 2, unit = "  " }

[[grammar]]
name = "odoc_mld"
source = { git = "https://github.com/YOUR_USER/tree-sitter-odoc-mld", rev = "main" }
```

Then copy the query files:

```sh
cp -r runtime/queries/odoc_mld ~/.config/helix/runtime/queries/odoc_mld
```

Or symlink them into your Helix runtime directory. The `injections.scm` file injects OCaml syntax highlighting into `{[ ... ]}` code blocks.
