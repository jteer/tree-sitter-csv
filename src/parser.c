#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  anon_sym_CR_LF = 2,
  anon_sym_COMMA = 3,
  anon_sym_PIPE = 4,
  anon_sym_SEMI = 5,
  anon_sym_BSLASHt = 6,
  sym_null_value = 7,
  sym_na_value = 8,
  sym_boolean_value = 9,
  sym_integer_value = 10,
  sym_hexadecimal = 11,
  sym_floating_point = 12,
  sym_quote_character = 13,
  sym_non_escaped_text = 14,
  sym_text_content = 15,
  anon_sym_DQUOTE_DQUOTE = 16,
  sym_source_file = 17,
  sym_record = 18,
  sym__end_of_record = 19,
  sym_field_pair = 20,
  sym_delimiter = 21,
  sym_field = 22,
  sym__numeric_value = 23,
  sym_string_value = 24,
  sym_escaped_content = 25,
  sym_escaped_quote = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_record_repeat1 = 28,
  aux_sym_escaped_content_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_COMMA] = ",",
  [anon_sym_PIPE] = "|",
  [anon_sym_SEMI] = ";",
  [anon_sym_BSLASHt] = "\\t",
  [sym_null_value] = "null_value",
  [sym_na_value] = "na_value",
  [sym_boolean_value] = "boolean_value",
  [sym_integer_value] = "integer_value",
  [sym_hexadecimal] = "hexadecimal",
  [sym_floating_point] = "floating_point",
  [sym_quote_character] = "quote_character",
  [sym_non_escaped_text] = "non_escaped_text",
  [sym_text_content] = "text_content",
  [anon_sym_DQUOTE_DQUOTE] = "\"\"",
  [sym_source_file] = "source_file",
  [sym_record] = "record",
  [sym__end_of_record] = "_end_of_record",
  [sym_field_pair] = "field_pair",
  [sym_delimiter] = "delimiter",
  [sym_field] = "field",
  [sym__numeric_value] = "_numeric_value",
  [sym_string_value] = "string_value",
  [sym_escaped_content] = "escaped_content",
  [sym_escaped_quote] = "escaped_quote",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
  [aux_sym_escaped_content_repeat1] = "escaped_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [sym_null_value] = sym_null_value,
  [sym_na_value] = sym_na_value,
  [sym_boolean_value] = sym_boolean_value,
  [sym_integer_value] = sym_integer_value,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_floating_point] = sym_floating_point,
  [sym_quote_character] = sym_quote_character,
  [sym_non_escaped_text] = sym_non_escaped_text,
  [sym_text_content] = sym_text_content,
  [anon_sym_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE,
  [sym_source_file] = sym_source_file,
  [sym_record] = sym_record,
  [sym__end_of_record] = sym__end_of_record,
  [sym_field_pair] = sym_field_pair,
  [sym_delimiter] = sym_delimiter,
  [sym_field] = sym_field,
  [sym__numeric_value] = sym__numeric_value,
  [sym_string_value] = sym_string_value,
  [sym_escaped_content] = sym_escaped_content,
  [sym_escaped_quote] = sym_escaped_quote,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
  [aux_sym_escaped_content_repeat1] = aux_sym_escaped_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [sym_null_value] = {
    .visible = true,
    .named = true,
  },
  [sym_na_value] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point] = {
    .visible = true,
    .named = true,
  },
  [sym_quote_character] = {
    .visible = true,
    .named = true,
  },
  [sym_non_escaped_text] = {
    .visible = true,
    .named = true,
  },
  [sym_text_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym__end_of_record] = {
    .visible = false,
    .named = true,
  },
  [sym_field_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__numeric_value] = {
    .visible = false,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_content] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_quote] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escaped_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_separator = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_separator] = "separator",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_separator, 0},
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
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == 'F') ADVANCE(5);
      if (lookahead == 'N') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '|') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'U') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == 'L') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'L') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'L') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'S') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'U') ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '\t') SKIP(26)
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '|') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_null_value);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_null_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_na_value);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_na_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_boolean_value);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_boolean_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_integer_value);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_integer_value);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_integer_value);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_integer_value);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_integer_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_integer_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_floating_point);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_floating_point);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_quote_character);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_quote_character);
      if (lookahead == '"') ADVANCE(76);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 't') ADVANCE(68);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'A') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'U') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'E') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'L') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'L') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'L') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'U') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_non_escaped_text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_text_content);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_text_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [sym_null_value] = ACTIONS(1),
    [sym_na_value] = ACTIONS(1),
    [sym_boolean_value] = ACTIONS(1),
    [sym_integer_value] = ACTIONS(1),
    [sym_hexadecimal] = ACTIONS(1),
    [sym_floating_point] = ACTIONS(1),
    [sym_quote_character] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_record] = STATE(3),
    [sym__end_of_record] = STATE(7),
    [sym_field_pair] = STATE(10),
    [sym_delimiter] = STATE(4),
    [sym_field] = STATE(9),
    [sym__numeric_value] = STATE(15),
    [sym_string_value] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_record_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_BSLASHt] = ACTIONS(7),
    [sym_null_value] = ACTIONS(9),
    [sym_na_value] = ACTIONS(9),
    [sym_boolean_value] = ACTIONS(9),
    [sym_integer_value] = ACTIONS(9),
    [sym_hexadecimal] = ACTIONS(9),
    [sym_floating_point] = ACTIONS(9),
    [sym_quote_character] = ACTIONS(11),
    [sym_non_escaped_text] = ACTIONS(13),
  },
  [2] = {
    [sym_record] = STATE(2),
    [sym__end_of_record] = STATE(7),
    [sym_field_pair] = STATE(10),
    [sym_delimiter] = STATE(4),
    [sym_field] = STATE(9),
    [sym__numeric_value] = STATE(15),
    [sym_string_value] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_record_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(20),
    [anon_sym_SEMI] = ACTIONS(20),
    [anon_sym_BSLASHt] = ACTIONS(20),
    [sym_null_value] = ACTIONS(23),
    [sym_na_value] = ACTIONS(23),
    [sym_boolean_value] = ACTIONS(23),
    [sym_integer_value] = ACTIONS(23),
    [sym_hexadecimal] = ACTIONS(23),
    [sym_floating_point] = ACTIONS(23),
    [sym_quote_character] = ACTIONS(26),
    [sym_non_escaped_text] = ACTIONS(29),
  },
  [3] = {
    [sym_record] = STATE(2),
    [sym__end_of_record] = STATE(7),
    [sym_field_pair] = STATE(10),
    [sym_delimiter] = STATE(4),
    [sym_field] = STATE(9),
    [sym__numeric_value] = STATE(15),
    [sym_string_value] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_record_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_BSLASHt] = ACTIONS(7),
    [sym_null_value] = ACTIONS(9),
    [sym_na_value] = ACTIONS(9),
    [sym_boolean_value] = ACTIONS(9),
    [sym_integer_value] = ACTIONS(9),
    [sym_hexadecimal] = ACTIONS(9),
    [sym_floating_point] = ACTIONS(9),
    [sym_quote_character] = ACTIONS(11),
    [sym_non_escaped_text] = ACTIONS(13),
  },
  [4] = {
    [sym_field] = STATE(14),
    [sym__numeric_value] = STATE(15),
    [sym_string_value] = STATE(15),
    [anon_sym_LF] = ACTIONS(34),
    [anon_sym_CR_LF] = ACTIONS(34),
    [anon_sym_COMMA] = ACTIONS(34),
    [anon_sym_PIPE] = ACTIONS(34),
    [anon_sym_SEMI] = ACTIONS(34),
    [anon_sym_BSLASHt] = ACTIONS(34),
    [sym_null_value] = ACTIONS(9),
    [sym_na_value] = ACTIONS(9),
    [sym_boolean_value] = ACTIONS(9),
    [sym_integer_value] = ACTIONS(9),
    [sym_hexadecimal] = ACTIONS(9),
    [sym_floating_point] = ACTIONS(9),
    [sym_quote_character] = ACTIONS(11),
    [sym_non_escaped_text] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 14,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_BSLASHt,
      sym_null_value,
      sym_na_value,
      sym_boolean_value,
      sym_integer_value,
      sym_hexadecimal,
      sym_floating_point,
      sym_quote_character,
      sym_non_escaped_text,
  [20] = 2,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 14,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_BSLASHt,
      sym_null_value,
      sym_na_value,
      sym_boolean_value,
      sym_integer_value,
      sym_hexadecimal,
      sym_floating_point,
      sym_quote_character,
      sym_non_escaped_text,
  [40] = 2,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 14,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_BSLASHt,
      sym_null_value,
      sym_na_value,
      sym_boolean_value,
      sym_integer_value,
      sym_hexadecimal,
      sym_floating_point,
      sym_quote_character,
      sym_non_escaped_text,
  [60] = 1,
    ACTIONS(48), 14,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_BSLASHt,
      sym_null_value,
      sym_na_value,
      sym_boolean_value,
      sym_integer_value,
      sym_hexadecimal,
      sym_floating_point,
      sym_quote_character,
      sym_non_escaped_text,
  [77] = 5,
    STATE(4), 1,
      sym_delimiter,
    STATE(5), 1,
      sym__end_of_record,
    ACTIONS(50), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(11), 2,
      sym_field_pair,
      aux_sym_record_repeat1,
    ACTIONS(7), 4,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_BSLASHt,
  [98] = 5,
    STATE(4), 1,
      sym_delimiter,
    STATE(5), 1,
      sym__end_of_record,
    ACTIONS(50), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(12), 2,
      sym_field_pair,
      aux_sym_record_repeat1,
    ACTIONS(7), 4,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_BSLASHt,
  [119] = 5,
    STATE(4), 1,
      sym_delimiter,
    STATE(6), 1,
      sym__end_of_record,
    ACTIONS(52), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(12), 2,
      sym_field_pair,
      aux_sym_record_repeat1,
    ACTIONS(7), 4,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_BSLASHt,
  [140] = 4,
    STATE(4), 1,
      sym_delimiter,
    ACTIONS(54), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(12), 2,
      sym_field_pair,
      aux_sym_record_repeat1,
    ACTIONS(56), 4,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_BSLASHt,
  [158] = 1,
    ACTIONS(59), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_BSLASHt,
  [167] = 1,
    ACTIONS(61), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_BSLASHt,
  [176] = 1,
    ACTIONS(63), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_BSLASHt,
  [185] = 1,
    ACTIONS(65), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_BSLASHt,
  [194] = 4,
    ACTIONS(67), 1,
      sym_quote_character,
    ACTIONS(69), 1,
      sym_text_content,
    ACTIONS(71), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(18), 2,
      sym_escaped_quote,
      aux_sym_escaped_content_repeat1,
  [208] = 4,
    ACTIONS(73), 1,
      sym_quote_character,
    ACTIONS(75), 1,
      sym_text_content,
    ACTIONS(78), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(18), 2,
      sym_escaped_quote,
      aux_sym_escaped_content_repeat1,
  [222] = 4,
    ACTIONS(71), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(81), 1,
      sym_text_content,
    STATE(21), 1,
      sym_escaped_content,
    STATE(17), 2,
      sym_escaped_quote,
      aux_sym_escaped_content_repeat1,
  [236] = 2,
    ACTIONS(85), 1,
      sym_text_content,
    ACTIONS(83), 2,
      sym_quote_character,
      anon_sym_DQUOTE_DQUOTE,
  [244] = 1,
    ACTIONS(87), 1,
      sym_quote_character,
  [248] = 1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 20,
  [SMALL_STATE(7)] = 40,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 77,
  [SMALL_STATE(10)] = 98,
  [SMALL_STATE(11)] = 119,
  [SMALL_STATE(12)] = 140,
  [SMALL_STATE(13)] = 158,
  [SMALL_STATE(14)] = 167,
  [SMALL_STATE(15)] = 176,
  [SMALL_STATE(16)] = 185,
  [SMALL_STATE(17)] = 194,
  [SMALL_STATE(18)] = 208,
  [SMALL_STATE(19)] = 222,
  [SMALL_STATE(20)] = 236,
  [SMALL_STATE(21)] = 244,
  [SMALL_STATE(22)] = 248,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_pair, 1, .production_id = 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delimiter, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_pair, 2, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_content, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_escaped_content_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_content_repeat1, 2), SHIFT_REPEAT(18),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_escaped_content_repeat1, 2), SHIFT_REPEAT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_quote, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_quote, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [89] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_csv(void) {
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
