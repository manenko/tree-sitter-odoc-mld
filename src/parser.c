#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  sym__newline = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_heading_level = 4,
  anon_sym_LBRACE_LBRACK = 5,
  anon_sym_RBRACK_RBRACE = 6,
  sym_code_content = 7,
  anon_sym_LBRACEv = 8,
  anon_sym_v_RBRACE = 9,
  sym_verbatim_content = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  sym_inline_code_content = 13,
  anon_sym_LBRACEb = 14,
  anon_sym_LBRACEi = 15,
  anon_sym_LBRACEe = 16,
  anon_sym_LBRACE_BANG = 17,
  anon_sym_LBRACE_LBRACE_BANG = 18,
  sym_ref_id = 19,
  sym_ul_bullet = 20,
  sym_ol_number = 21,
  anon_sym_LBRACEmath = 22,
  anon_sym_LBRACEm = 23,
  sym_math_content = 24,
  sym_word = 25,
  sym_document = 26,
  sym__block = 27,
  sym_paragraph = 28,
  sym_heading = 29,
  sym_heading_content = 30,
  sym_code_block = 31,
  sym_verbatim_block = 32,
  sym_inline_code = 33,
  sym_bold = 34,
  sym_italic = 35,
  sym_emph = 36,
  sym_ref = 37,
  sym_ref_with_text = 38,
  sym_ul_item = 39,
  sym_ol_item = 40,
  sym_math_block = 41,
  sym_math_inline = 42,
  sym__inline = 43,
  aux_sym_document_repeat1 = 44,
  aux_sym_paragraph_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_heading_level] = "heading_level",
  [anon_sym_LBRACE_LBRACK] = "{[",
  [anon_sym_RBRACK_RBRACE] = "]}",
  [sym_code_content] = "code_content",
  [anon_sym_LBRACEv] = "{v",
  [anon_sym_v_RBRACE] = "v}",
  [sym_verbatim_content] = "verbatim_content",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_inline_code_content] = "inline_code_content",
  [anon_sym_LBRACEb] = "{b",
  [anon_sym_LBRACEi] = "{i",
  [anon_sym_LBRACEe] = "{e",
  [anon_sym_LBRACE_BANG] = "{!",
  [anon_sym_LBRACE_LBRACE_BANG] = "{{!",
  [sym_ref_id] = "ref_id",
  [sym_ul_bullet] = "ul_bullet",
  [sym_ol_number] = "ol_number",
  [anon_sym_LBRACEmath] = "{math",
  [anon_sym_LBRACEm] = "{m",
  [sym_math_content] = "math_content",
  [sym_word] = "word",
  [sym_document] = "document",
  [sym__block] = "_block",
  [sym_paragraph] = "paragraph",
  [sym_heading] = "heading",
  [sym_heading_content] = "heading_content",
  [sym_code_block] = "code_block",
  [sym_verbatim_block] = "verbatim_block",
  [sym_inline_code] = "inline_code",
  [sym_bold] = "bold",
  [sym_italic] = "italic",
  [sym_emph] = "emph",
  [sym_ref] = "ref",
  [sym_ref_with_text] = "ref_with_text",
  [sym_ul_item] = "ul_item",
  [sym_ol_item] = "ol_item",
  [sym_math_block] = "math_block",
  [sym_math_inline] = "math_inline",
  [sym__inline] = "_inline",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_heading_level] = sym_heading_level,
  [anon_sym_LBRACE_LBRACK] = anon_sym_LBRACE_LBRACK,
  [anon_sym_RBRACK_RBRACE] = anon_sym_RBRACK_RBRACE,
  [sym_code_content] = sym_code_content,
  [anon_sym_LBRACEv] = anon_sym_LBRACEv,
  [anon_sym_v_RBRACE] = anon_sym_v_RBRACE,
  [sym_verbatim_content] = sym_verbatim_content,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_inline_code_content] = sym_inline_code_content,
  [anon_sym_LBRACEb] = anon_sym_LBRACEb,
  [anon_sym_LBRACEi] = anon_sym_LBRACEi,
  [anon_sym_LBRACEe] = anon_sym_LBRACEe,
  [anon_sym_LBRACE_BANG] = anon_sym_LBRACE_BANG,
  [anon_sym_LBRACE_LBRACE_BANG] = anon_sym_LBRACE_LBRACE_BANG,
  [sym_ref_id] = sym_ref_id,
  [sym_ul_bullet] = sym_ul_bullet,
  [sym_ol_number] = sym_ol_number,
  [anon_sym_LBRACEmath] = anon_sym_LBRACEmath,
  [anon_sym_LBRACEm] = anon_sym_LBRACEm,
  [sym_math_content] = sym_math_content,
  [sym_word] = sym_word,
  [sym_document] = sym_document,
  [sym__block] = sym__block,
  [sym_paragraph] = sym_paragraph,
  [sym_heading] = sym_heading,
  [sym_heading_content] = sym_heading_content,
  [sym_code_block] = sym_code_block,
  [sym_verbatim_block] = sym_verbatim_block,
  [sym_inline_code] = sym_inline_code,
  [sym_bold] = sym_bold,
  [sym_italic] = sym_italic,
  [sym_emph] = sym_emph,
  [sym_ref] = sym_ref,
  [sym_ref_with_text] = sym_ref_with_text,
  [sym_ul_item] = sym_ul_item,
  [sym_ol_item] = sym_ol_item,
  [sym_math_block] = sym_math_block,
  [sym_math_inline] = sym_math_inline,
  [sym__inline] = sym__inline,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_heading_level] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_code_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACEv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_verbatim_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_inline_code_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACEb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_ref_id] = {
    .visible = true,
    .named = true,
  },
  [sym_ul_bullet] = {
    .visible = true,
    .named = true,
  },
  [sym_ol_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACEmath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEm] = {
    .visible = true,
    .named = false,
  },
  [sym_math_content] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_content] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_block] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_code] = {
    .visible = true,
    .named = true,
  },
  [sym_bold] = {
    .visible = true,
    .named = true,
  },
  [sym_italic] = {
    .visible = true,
    .named = true,
  },
  [sym_emph] = {
    .visible = true,
    .named = true,
  },
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_ref_with_text] = {
    .visible = true,
    .named = true,
  },
  [sym_ul_item] = {
    .visible = true,
    .named = true,
  },
  [sym_ol_item] = {
    .visible = true,
    .named = true,
  },
  [sym_math_block] = {
    .visible = true,
    .named = true,
  },
  [sym_math_inline] = {
    .visible = true,
    .named = true,
  },
  [sym__inline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_content = 1,
  field_id = 2,
  field_level = 3,
  field_text = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_id] = "id",
  [field_level] = "level",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
  [1] =
    {field_id, 1},
  [2] =
    {field_content, 2},
    {field_level, 1},
  [4] =
    {field_id, 1},
    {field_text, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 4,
  [13] = 13,
  [14] = 9,
  [15] = 15,
  [16] = 8,
  [17] = 11,
  [18] = 10,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 25,
  [26] = 25,
  [27] = 23,
  [28] = 19,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 32,
  [45] = 30,
  [46] = 33,
  [47] = 39,
  [48] = 36,
  [49] = 41,
  [50] = 42,
  [51] = 43,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 59,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 57,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 67,
  [71] = 71,
  [72] = 69,
  [73] = 64,
  [74] = 74,
  [75] = 58,
  [76] = 68,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == 'v') ADVANCE(10);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == '{') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(32);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(28);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(51);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ']') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'v') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == 'v') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(34);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(12);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'v') ADVANCE(31);
      if (lookahead == '{') ADVANCE(5);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_heading_level);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_code_content);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ']') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_code_content);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == ']') ADVANCE(19);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACEv);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_v_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_verbatim_content);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'v') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == 'v') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_verbatim_content);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != 'v') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_inline_code_content);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_inline_code_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACEb);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACEi);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACEe);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANG);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_ref_id);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_ul_bullet);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_ol_number);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACEmath);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACEm);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACEm);
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_math_content);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_math_content);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '{') ADVANCE(14);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 21},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_heading_level] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACEv] = ACTIONS(1),
    [anon_sym_v_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACEb] = ACTIONS(1),
    [anon_sym_LBRACEi] = ACTIONS(1),
    [anon_sym_LBRACEe] = ACTIONS(1),
    [anon_sym_LBRACE_BANG] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_BANG] = ACTIONS(1),
    [sym_ul_bullet] = ACTIONS(1),
    [anon_sym_LBRACEmath] = ACTIONS(1),
    [anon_sym_LBRACEm] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(63),
    [sym__block] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym_heading] = STATE(3),
    [sym_code_block] = STATE(3),
    [sym_verbatim_block] = STATE(3),
    [sym_inline_code] = STATE(7),
    [sym_bold] = STATE(7),
    [sym_italic] = STATE(7),
    [sym_emph] = STATE(7),
    [sym_ref] = STATE(7),
    [sym_ref_with_text] = STATE(7),
    [sym_ul_item] = STATE(3),
    [sym_ol_item] = STATE(3),
    [sym_math_block] = STATE(3),
    [sym_math_inline] = STATE(7),
    [sym__inline] = STATE(7),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__newline] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACEv] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACEb] = ACTIONS(15),
    [anon_sym_LBRACEi] = ACTIONS(17),
    [anon_sym_LBRACEe] = ACTIONS(19),
    [anon_sym_LBRACE_BANG] = ACTIONS(21),
    [anon_sym_LBRACE_LBRACE_BANG] = ACTIONS(23),
    [sym_ul_bullet] = ACTIONS(25),
    [sym_ol_number] = ACTIONS(27),
    [anon_sym_LBRACEmath] = ACTIONS(29),
    [anon_sym_LBRACEm] = ACTIONS(31),
    [sym_word] = ACTIONS(33),
  },
  [2] = {
    [sym__block] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym_heading] = STATE(2),
    [sym_code_block] = STATE(2),
    [sym_verbatim_block] = STATE(2),
    [sym_inline_code] = STATE(7),
    [sym_bold] = STATE(7),
    [sym_italic] = STATE(7),
    [sym_emph] = STATE(7),
    [sym_ref] = STATE(7),
    [sym_ref_with_text] = STATE(7),
    [sym_ul_item] = STATE(2),
    [sym_ol_item] = STATE(2),
    [sym_math_block] = STATE(2),
    [sym_math_inline] = STATE(7),
    [sym__inline] = STATE(7),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym__newline] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACEv] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACEb] = ACTIONS(52),
    [anon_sym_LBRACEi] = ACTIONS(55),
    [anon_sym_LBRACEe] = ACTIONS(58),
    [anon_sym_LBRACE_BANG] = ACTIONS(61),
    [anon_sym_LBRACE_LBRACE_BANG] = ACTIONS(64),
    [sym_ul_bullet] = ACTIONS(67),
    [sym_ol_number] = ACTIONS(70),
    [anon_sym_LBRACEmath] = ACTIONS(73),
    [anon_sym_LBRACEm] = ACTIONS(76),
    [sym_word] = ACTIONS(79),
  },
  [3] = {
    [sym__block] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym_heading] = STATE(2),
    [sym_code_block] = STATE(2),
    [sym_verbatim_block] = STATE(2),
    [sym_inline_code] = STATE(7),
    [sym_bold] = STATE(7),
    [sym_italic] = STATE(7),
    [sym_emph] = STATE(7),
    [sym_ref] = STATE(7),
    [sym_ref_with_text] = STATE(7),
    [sym_ul_item] = STATE(2),
    [sym_ol_item] = STATE(2),
    [sym_math_block] = STATE(2),
    [sym_math_inline] = STATE(7),
    [sym__inline] = STATE(7),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym__newline] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACEv] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACEb] = ACTIONS(15),
    [anon_sym_LBRACEi] = ACTIONS(17),
    [anon_sym_LBRACEe] = ACTIONS(19),
    [anon_sym_LBRACE_BANG] = ACTIONS(21),
    [anon_sym_LBRACE_LBRACE_BANG] = ACTIONS(23),
    [sym_ul_bullet] = ACTIONS(25),
    [sym_ol_number] = ACTIONS(27),
    [anon_sym_LBRACEmath] = ACTIONS(29),
    [anon_sym_LBRACEm] = ACTIONS(31),
    [sym_word] = ACTIONS(33),
  },
  [4] = {
    [sym_inline_code] = STATE(4),
    [sym_bold] = STATE(4),
    [sym_italic] = STATE(4),
    [sym_emph] = STATE(4),
    [sym_ref] = STATE(4),
    [sym_ref_with_text] = STATE(4),
    [sym_math_inline] = STATE(4),
    [sym__inline] = STATE(4),
    [aux_sym_paragraph_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym__newline] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_LBRACE_LBRACK] = ACTIONS(86),
    [anon_sym_LBRACEv] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_LBRACEb] = ACTIONS(93),
    [anon_sym_LBRACEi] = ACTIONS(96),
    [anon_sym_LBRACEe] = ACTIONS(99),
    [anon_sym_LBRACE_BANG] = ACTIONS(102),
    [anon_sym_LBRACE_LBRACE_BANG] = ACTIONS(105),
    [sym_ul_bullet] = ACTIONS(86),
    [sym_ol_number] = ACTIONS(86),
    [anon_sym_LBRACEmath] = ACTIONS(86),
    [anon_sym_LBRACEm] = ACTIONS(108),
    [sym_word] = ACTIONS(111),
  },
  [5] = {
    [sym_inline_code] = STATE(4),
    [sym_bold] = STATE(4),
    [sym_italic] = STATE(4),
    [sym_emph] = STATE(4),
    [sym_ref] = STATE(4),
    [sym_ref_with_text] = STATE(4),
    [sym_math_inline] = STATE(4),
    [sym__inline] = STATE(4),
    [aux_sym_paragraph_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym__newline] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACK] = ACTIONS(114),
    [anon_sym_LBRACEv] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_LBRACEb] = ACTIONS(121),
    [anon_sym_LBRACEi] = ACTIONS(124),
    [anon_sym_LBRACEe] = ACTIONS(127),
    [anon_sym_LBRACE_BANG] = ACTIONS(130),
    [anon_sym_LBRACE_LBRACE_BANG] = ACTIONS(133),
    [sym_ul_bullet] = ACTIONS(114),
    [sym_ol_number] = ACTIONS(114),
    [anon_sym_LBRACEmath] = ACTIONS(114),
    [anon_sym_LBRACEm] = ACTIONS(136),
    [sym_word] = ACTIONS(139),
  },
  [6] = {
    [sym_inline_code] = STATE(4),
    [sym_bold] = STATE(4),
    [sym_italic] = STATE(4),
    [sym_emph] = STATE(4),
    [sym_ref] = STATE(4),
    [sym_ref_with_text] = STATE(4),
    [sym_math_inline] = STATE(4),
    [sym__inline] = STATE(4),
    [aux_sym_paragraph_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(142),
    [sym__newline] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_LBRACE_LBRACK] = ACTIONS(142),
    [anon_sym_LBRACEv] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACEb] = ACTIONS(149),
    [anon_sym_LBRACEi] = ACTIONS(152),
    [anon_sym_LBRACEe] = ACTIONS(155),
    [anon_sym_LBRACE_BANG] = ACTIONS(158),
    [anon_sym_LBRACE_LBRACE_BANG] = ACTIONS(161),
    [sym_ul_bullet] = ACTIONS(142),
    [sym_ol_number] = ACTIONS(142),
    [anon_sym_LBRACEmath] = ACTIONS(142),
    [anon_sym_LBRACEm] = ACTIONS(164),
    [sym_word] = ACTIONS(167),
  },
  [7] = {
    [sym_inline_code] = STATE(4),
    [sym_bold] = STATE(4),
    [sym_italic] = STATE(4),
    [sym_emph] = STATE(4),
    [sym_ref] = STATE(4),
    [sym_ref_with_text] = STATE(4),
    [sym_math_inline] = STATE(4),
    [sym__inline] = STATE(4),
    [aux_sym_paragraph_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym__newline] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_LBRACE_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACEv] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACEb] = ACTIONS(15),
    [anon_sym_LBRACEi] = ACTIONS(17),
    [anon_sym_LBRACEe] = ACTIONS(19),
    [anon_sym_LBRACE_BANG] = ACTIONS(21),
    [anon_sym_LBRACE_LBRACE_BANG] = ACTIONS(23),
    [sym_ul_bullet] = ACTIONS(170),
    [sym_ol_number] = ACTIONS(170),
    [anon_sym_LBRACEmath] = ACTIONS(170),
    [anon_sym_LBRACEm] = ACTIONS(31),
    [sym_word] = ACTIONS(174),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(192), 1,
      sym_word,
    STATE(12), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [39] = 10,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(192), 1,
      sym_word,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(12), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [78] = 10,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(192), 1,
      sym_word,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(12), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [117] = 10,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(192), 1,
      sym_word,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(12), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [156] = 10,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_LBRACEb,
    ACTIONS(206), 1,
      anon_sym_LBRACEi,
    ACTIONS(209), 1,
      anon_sym_LBRACEe,
    ACTIONS(212), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(215), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(218), 1,
      anon_sym_LBRACEm,
    ACTIONS(221), 1,
      sym_word,
    STATE(12), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [195] = 10,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(224), 1,
      sym_word,
    STATE(71), 1,
      sym_heading_content,
    STATE(15), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [234] = 10,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(192), 1,
      sym_word,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(12), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [273] = 10,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(192), 1,
      sym_word,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(12), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [312] = 10,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(192), 1,
      sym_word,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(12), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [351] = 10,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(192), 1,
      sym_word,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    STATE(12), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [390] = 10,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(192), 1,
      sym_word,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(12), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [429] = 9,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(236), 1,
      sym_word,
    STATE(18), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [465] = 9,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACEb,
    ACTIONS(17), 1,
      anon_sym_LBRACEi,
    ACTIONS(19), 1,
      anon_sym_LBRACEe,
    ACTIONS(21), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(23), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(238), 1,
      anon_sym_LBRACEm,
    ACTIONS(240), 1,
      sym_word,
    STATE(6), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [501] = 9,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACEb,
    ACTIONS(17), 1,
      anon_sym_LBRACEi,
    ACTIONS(19), 1,
      anon_sym_LBRACEe,
    ACTIONS(21), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(23), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(238), 1,
      anon_sym_LBRACEm,
    ACTIONS(242), 1,
      sym_word,
    STATE(5), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [537] = 9,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(244), 1,
      sym_word,
    STATE(9), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [573] = 9,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(246), 1,
      sym_word,
    STATE(17), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [609] = 9,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(248), 1,
      sym_word,
    STATE(14), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [645] = 9,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(250), 1,
      sym_word,
    STATE(16), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [681] = 9,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(252), 1,
      sym_word,
    STATE(8), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [717] = 9,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(254), 1,
      sym_word,
    STATE(11), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [753] = 9,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_LBRACEb,
    ACTIONS(182), 1,
      anon_sym_LBRACEi,
    ACTIONS(184), 1,
      anon_sym_LBRACEe,
    ACTIONS(186), 1,
      anon_sym_LBRACE_BANG,
    ACTIONS(188), 1,
      anon_sym_LBRACE_LBRACE_BANG,
    ACTIONS(190), 1,
      anon_sym_LBRACEm,
    ACTIONS(256), 1,
      sym_word,
    STATE(10), 9,
      sym_inline_code,
      sym_bold,
      sym_italic,
      sym_emph,
      sym_ref,
      sym_ref_with_text,
      sym_math_inline,
      sym__inline,
      aux_sym_paragraph_repeat1,
  [789] = 2,
    ACTIONS(260), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACEm,
      sym_word,
    ACTIONS(258), 13,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_LBRACE_LBRACK,
      anon_sym_LBRACEv,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      sym_ul_bullet,
      sym_ol_number,
      anon_sym_LBRACEmath,
  [810] = 2,
    ACTIONS(264), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACEm,
      sym_word,
    ACTIONS(262), 13,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_LBRACE_LBRACK,
      anon_sym_LBRACEv,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      sym_ul_bullet,
      sym_ol_number,
      anon_sym_LBRACEmath,
  [831] = 2,
    ACTIONS(268), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACEm,
      sym_word,
    ACTIONS(266), 13,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_LBRACE_LBRACK,
      anon_sym_LBRACEv,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      sym_ul_bullet,
      sym_ol_number,
      anon_sym_LBRACEmath,
  [852] = 2,
    ACTIONS(272), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACEm,
      sym_word,
    ACTIONS(270), 13,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_LBRACE_LBRACK,
      anon_sym_LBRACEv,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      sym_ul_bullet,
      sym_ol_number,
      anon_sym_LBRACEmath,
  [873] = 2,
    ACTIONS(276), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACEm,
      sym_word,
    ACTIONS(274), 13,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_LBRACE_LBRACK,
      anon_sym_LBRACEv,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      sym_ul_bullet,
      sym_ol_number,
      anon_sym_LBRACEmath,
  [894] = 2,
    ACTIONS(280), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACEm,
      sym_word,
    ACTIONS(278), 13,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_LBRACE_LBRACK,
      anon_sym_LBRACEv,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      sym_ul_bullet,
      sym_ol_number,
      anon_sym_LBRACEmath,
  [915] = 2,
    ACTIONS(284), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACEm,
      sym_word,
    ACTIONS(282), 13,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_LBRACE_LBRACK,
      anon_sym_LBRACEv,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      sym_ul_bullet,
      sym_ol_number,
      anon_sym_LBRACEmath,
  [936] = 2,
    ACTIONS(288), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACEm,
      sym_word,
    ACTIONS(286), 13,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_LBRACE_LBRACK,
      anon_sym_LBRACEv,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      sym_ul_bullet,
      sym_ol_number,
      anon_sym_LBRACEmath,
  [957] = 2,
    ACTIONS(292), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACEm,
      sym_word,
    ACTIONS(290), 13,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_LBRACE_LBRACK,
      anon_sym_LBRACEv,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      sym_ul_bullet,
      sym_ol_number,
      anon_sym_LBRACEmath,
  [978] = 2,
    ACTIONS(296), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACEm,
      sym_word,
    ACTIONS(294), 13,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_LBRACE_LBRACK,
      anon_sym_LBRACEv,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      sym_ul_bullet,
      sym_ol_number,
      anon_sym_LBRACEmath,
  [999] = 2,
    ACTIONS(300), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACEm,
      sym_word,
    ACTIONS(298), 13,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_LBRACE_LBRACK,
      anon_sym_LBRACEv,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      sym_ul_bullet,
      sym_ol_number,
      anon_sym_LBRACEmath,
  [1020] = 2,
    ACTIONS(304), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACEm,
      sym_word,
    ACTIONS(302), 13,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_LBRACE_LBRACK,
      anon_sym_LBRACEv,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      sym_ul_bullet,
      sym_ol_number,
      anon_sym_LBRACEmath,
  [1041] = 2,
    ACTIONS(308), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACEm,
      sym_word,
    ACTIONS(306), 13,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_LBRACE_LBRACK,
      anon_sym_LBRACEv,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      sym_ul_bullet,
      sym_ol_number,
      anon_sym_LBRACEmath,
  [1062] = 2,
    ACTIONS(312), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACEm,
      sym_word,
    ACTIONS(310), 13,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_LBRACE_LBRACK,
      anon_sym_LBRACEv,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      sym_ul_bullet,
      sym_ol_number,
      anon_sym_LBRACEmath,
  [1083] = 2,
    ACTIONS(316), 3,
      anon_sym_LBRACE,
      anon_sym_LBRACEm,
      sym_word,
    ACTIONS(314), 13,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_LBRACE_LBRACK,
      anon_sym_LBRACEv,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      sym_ul_bullet,
      sym_ol_number,
      anon_sym_LBRACEmath,
  [1104] = 1,
    ACTIONS(270), 9,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACEm,
      sym_word,
  [1116] = 1,
    ACTIONS(262), 9,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACEm,
      sym_word,
  [1128] = 1,
    ACTIONS(274), 9,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACEm,
      sym_word,
  [1140] = 1,
    ACTIONS(298), 9,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACEm,
      sym_word,
  [1152] = 1,
    ACTIONS(286), 9,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACEm,
      sym_word,
  [1164] = 1,
    ACTIONS(306), 9,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACEm,
      sym_word,
  [1176] = 1,
    ACTIONS(310), 9,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACEm,
      sym_word,
  [1188] = 1,
    ACTIONS(314), 9,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACEb,
      anon_sym_LBRACEi,
      anon_sym_LBRACEe,
      anon_sym_LBRACE_BANG,
      anon_sym_LBRACE_LBRACE_BANG,
      anon_sym_LBRACEm,
      sym_word,
  [1200] = 2,
    ACTIONS(318), 1,
      anon_sym_RBRACK_RBRACE,
    ACTIONS(320), 1,
      sym_code_content,
  [1207] = 2,
    ACTIONS(322), 1,
      anon_sym_v_RBRACE,
    ACTIONS(324), 1,
      sym_verbatim_content,
  [1214] = 2,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    ACTIONS(328), 1,
      sym_inline_code_content,
  [1221] = 2,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    ACTIONS(332), 1,
      sym_math_content,
  [1228] = 2,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    ACTIONS(336), 1,
      sym_inline_code_content,
  [1235] = 1,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
  [1239] = 1,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
  [1243] = 1,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
  [1247] = 1,
    ACTIONS(344), 1,
      anon_sym_v_RBRACE,
  [1251] = 1,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
  [1255] = 1,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
  [1259] = 1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [1263] = 1,
    ACTIONS(352), 1,
      sym_math_content,
  [1267] = 1,
    ACTIONS(354), 1,
      anon_sym_RBRACK_RBRACE,
  [1271] = 1,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
  [1275] = 1,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
  [1279] = 1,
    ACTIONS(360), 1,
      sym_ref_id,
  [1283] = 1,
    ACTIONS(362), 1,
      sym_ref_id,
  [1287] = 1,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
  [1291] = 1,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
  [1295] = 1,
    ACTIONS(368), 1,
      sym_ref_id,
  [1299] = 1,
    ACTIONS(370), 1,
      sym_math_content,
  [1303] = 1,
    ACTIONS(372), 1,
      sym_heading_level,
  [1307] = 1,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
  [1311] = 1,
    ACTIONS(376), 1,
      sym_ref_id,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 39,
  [SMALL_STATE(10)] = 78,
  [SMALL_STATE(11)] = 117,
  [SMALL_STATE(12)] = 156,
  [SMALL_STATE(13)] = 195,
  [SMALL_STATE(14)] = 234,
  [SMALL_STATE(15)] = 273,
  [SMALL_STATE(16)] = 312,
  [SMALL_STATE(17)] = 351,
  [SMALL_STATE(18)] = 390,
  [SMALL_STATE(19)] = 429,
  [SMALL_STATE(20)] = 465,
  [SMALL_STATE(21)] = 501,
  [SMALL_STATE(22)] = 537,
  [SMALL_STATE(23)] = 573,
  [SMALL_STATE(24)] = 609,
  [SMALL_STATE(25)] = 645,
  [SMALL_STATE(26)] = 681,
  [SMALL_STATE(27)] = 717,
  [SMALL_STATE(28)] = 753,
  [SMALL_STATE(29)] = 789,
  [SMALL_STATE(30)] = 810,
  [SMALL_STATE(31)] = 831,
  [SMALL_STATE(32)] = 852,
  [SMALL_STATE(33)] = 873,
  [SMALL_STATE(34)] = 894,
  [SMALL_STATE(35)] = 915,
  [SMALL_STATE(36)] = 936,
  [SMALL_STATE(37)] = 957,
  [SMALL_STATE(38)] = 978,
  [SMALL_STATE(39)] = 999,
  [SMALL_STATE(40)] = 1020,
  [SMALL_STATE(41)] = 1041,
  [SMALL_STATE(42)] = 1062,
  [SMALL_STATE(43)] = 1083,
  [SMALL_STATE(44)] = 1104,
  [SMALL_STATE(45)] = 1116,
  [SMALL_STATE(46)] = 1128,
  [SMALL_STATE(47)] = 1140,
  [SMALL_STATE(48)] = 1152,
  [SMALL_STATE(49)] = 1164,
  [SMALL_STATE(50)] = 1176,
  [SMALL_STATE(51)] = 1188,
  [SMALL_STATE(52)] = 1200,
  [SMALL_STATE(53)] = 1207,
  [SMALL_STATE(54)] = 1214,
  [SMALL_STATE(55)] = 1221,
  [SMALL_STATE(56)] = 1228,
  [SMALL_STATE(57)] = 1235,
  [SMALL_STATE(58)] = 1239,
  [SMALL_STATE(59)] = 1243,
  [SMALL_STATE(60)] = 1247,
  [SMALL_STATE(61)] = 1251,
  [SMALL_STATE(62)] = 1255,
  [SMALL_STATE(63)] = 1259,
  [SMALL_STATE(64)] = 1263,
  [SMALL_STATE(65)] = 1267,
  [SMALL_STATE(66)] = 1271,
  [SMALL_STATE(67)] = 1275,
  [SMALL_STATE(68)] = 1279,
  [SMALL_STATE(69)] = 1283,
  [SMALL_STATE(70)] = 1287,
  [SMALL_STATE(71)] = 1291,
  [SMALL_STATE(72)] = 1295,
  [SMALL_STATE(73)] = 1299,
  [SMALL_STATE(74)] = 1303,
  [SMALL_STATE(75)] = 1307,
  [SMALL_STATE(76)] = 1311,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(54),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(25),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(23),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(19),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(69),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(68),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(64),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ol_item, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ol_item, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ol_item, 2), SHIFT(54),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ol_item, 2), SHIFT(25),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ol_item, 2), SHIFT(23),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ol_item, 2), SHIFT(19),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ol_item, 2), SHIFT(69),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ol_item, 2), SHIFT(68),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ol_item, 2), SHIFT(64),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ol_item, 2), SHIFT(4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ul_item, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ul_item, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ul_item, 2), SHIFT(54),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ul_item, 2), SHIFT(25),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ul_item, 2), SHIFT(23),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ul_item, 2), SHIFT(19),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ul_item, 2), SHIFT(69),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ul_item, 2), SHIFT(68),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ul_item, 2), SHIFT(64),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_ul_item, 2), SHIFT(4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(56),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(26),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(27),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(28),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(72),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(76),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(73),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(12),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_content, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3, .production_id = 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emph, 3, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emph, 3, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_code, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_code, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_with_text, 5, .production_id = 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_with_text, 5, .production_id = 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_block, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_block, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_inline, 3, .production_id = 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_inline, 3, .production_id = 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_block, 3, .production_id = 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_block, 3, .production_id = 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_block, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_block, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3, .production_id = 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 3, .production_id = 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_block, 3, .production_id = 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_block, 3, .production_id = 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_code, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_code, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold, 3, .production_id = 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold, 3, .production_id = 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic, 3, .production_id = 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic, 3, .production_id = 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [350] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_odoc_mld(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
