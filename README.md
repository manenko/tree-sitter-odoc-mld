# tree-sitter-odoc-mld

A [Tree-sitter](https://tree-sitter.github.io/) grammar for OCaml odoc `.mld` files, with [Helix](https://helix-editor.com/) syntax highlighting and language injection support.

This grammar was implemented entirely by [Claude](https://claude.ai/) (Anthropic's AI assistant) using [Claude Code](https://docs.anthropic.com/en/docs/claude-code). A human provided the requirements specification, performed all testing in Helix, reported issues, and guided iterative improvements to the highlighting queries.

## Supported constructs

| Construct | Syntax | Node type |
|-----------|--------|-----------|
| Headings | `{0 Title}` .. `{4 Title}` | `heading` |
| Labeled headings | `{0:label Title}` | `heading` |
| Code blocks | `{[ ... ]}` | `code_block` |
| Tagged code blocks | `{@lang[ ... ]}` | `tagged_code_block` |
| Verbatim | `{v ... v}` | `verbatim_block` |
| Inline code | `[ ... ]` | `inline_code` |
| Bold | `{b ...}` | `bold` |
| Italic | `{i ...}` | `italic` |
| Emphasis | `{e ...}` | `emph` |
| Superscript | `{^ ...}` | `superscript` |
| Subscript | `{_ ...}` | `subscript` |
| Center alignment | `{C ...}` | `center` |
| Left alignment | `{L ...}` | `left` |
| Right alignment | `{R ...}` | `right` |
| Reference | `{!id}` | `ref` |
| Ref with text | `{{!id} text}` | `ref_with_text` |
| Link | `{{: url} text}` | `link` |
| Unordered list | `- item` | `ul_item` |
| Ordered list | `1. item` | `ol_item` |
| Tagged unordered list | `{ul {- item} ...}` | `tagged_ul` |
| Tagged ordered list | `{ol {- item} ...}` | `tagged_ol` |
| List item (alt) | `{li item}` | `list_item` |
| Block math | `{math ...}` | `math_block` |
| Inline math | `{m ...}` | `math_inline` |
| Escape sequences | `\{` `\}` `\[` `\]` `\@` | `escape_sequence` |
| Target-specific | `{% ... %}` `{%html: ... %}` | `target_specific` |
| Modules directive | `{!modules: Foo Bar}` | `modules_directive` |
| Index list | `{!indexlist}` | `indexlist_directive` |
| Media (simple) | `{image:path}` `{video:path}` `{audio:path}` | `media_simple` |
| Media (with text) | `{{image:path} alt}` | `media_with_text` |
| `@author` | `@author Name` | `author_tag` |
| `@since` | `@since 1.0` | `since_tag` |
| `@version` | `@version 2.0` | `version_tag` |
| `@deprecated` | `@deprecated Use X instead` | `deprecated_tag` |
| `@return` / `@returns` | `@return the result` | `return_tag` |
| `@param` | `@param x the value` | `param_tag` |
| `@raise` / `@raises` | `@raise Not_found when ...` | `raise_tag` |
| `@before` | `@before 1.0 old behavior` | `before_tag` |
| `@see` | `@see <url>` `@see 'file'` `@see "doc"` | `see_tag` |
| Hints | `@open` `@closed` `@inline` `@canonical` | `hint_tag` |

## Highlighting

All constructs have consistent delimiter highlighting that matches their content style. Special characters like `!` in references and `:` in links are highlighted as operators to distinguish them from surrounding braces.

## Language injection

- Plain code blocks `{[ ... ]}` inject OCaml by default.
- Tagged code blocks `{@lang[ ... ]}` inject the specified language (e.g. `{@python[ ... ]}` injects Python, `{@rust[ ... ]}` injects Rust).
- Verbatim blocks `{v ... v}` have no injection.

## Example input

```
{0:my-lib My library}

This library provides {b fast} and {i safe} primitives.
Water is H{_ 2}O. This is x{^ 2}.

{1 Overview}

{[
let rec fib n =
  if n <= 1 then 1
  else fib (n - 1) + fib (n - 2)
]}

{@python[
def greet(name):
    return f"Hello, {name}!"
]}

See {!Map} and {{!List.map} map} for details.
Visit {{: https://ocaml.org} the OCaml website}.

{ul {- First item with {b bold}}
    {- Second item with [inline code]}
    {li Third item using li syntax}}

1. Ordered item
2. Another with {i emphasis}

{m a^2 + b^2 = c^2}

Use \{ and \} for literal braces.

{%html: <div class="note">A note</div> %}

{image:logo.png}
{{image:banner.png} Site banner}

{!modules: Foo Bar Baz}

@param x the input value
@return the computed result
@since 1.0
@raise Not_found when the key is missing
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
name          = "odoc-mld"
grammar       = "odoc_mld"
scope         = "source.odoc_mld"
file-types    = ["mld"]
indent        = { tab-width = 2, unit = "  " }

[[grammar]]
name          = "odoc_mld"
source        = { git = "https://gitlab.com/manenko/tree-sitter-odoc-mld", rev = "development" }
```

Then fetch and build the grammar:

```sh
hx --grammar fetch
hx --grammar build
```

Copy or symlink the query files into your Helix runtime:

```sh
ln -dst ~/.config/helix/runtime/queries/ ~/.config/helix/runtime/grammars/sources/odoc_mld/runtime/queries/odoc-mld
```
