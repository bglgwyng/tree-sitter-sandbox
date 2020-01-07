#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_whitespace = 1,
  sym_identifier = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_DASH_GT = 5,
  sym_source_file = 6,
  sym_parethesized = 7,
  sym_arrow = 8,
  sym_apply = 9,
  sym__term = 10,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_whitespace] = "whitespace",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [sym_source_file] = "source_file",
  [sym_parethesized] = "parethesized",
  [sym_arrow] = "arrow",
  [sym_apply] = "apply",
  [sym__term] = "_term",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_whitespace] = sym_whitespace,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_source_file] = sym_source_file,
  [sym_parethesized] = sym_parethesized,
  [sym_arrow] = sym_arrow,
  [sym_apply] = sym_apply,
  [sym__term] = sym__term,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_parethesized] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_apply] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '>') ADVANCE(7);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_parethesized] = STATE(7),
    [sym_arrow] = STATE(7),
    [sym_apply] = STATE(7),
    [sym__term] = STATE(7),
    [sym_identifier] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
  [2] = {
    [sym_parethesized] = STATE(3),
    [sym_arrow] = STATE(3),
    [sym_apply] = STATE(3),
    [sym__term] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_whitespace] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_DASH_GT] = ACTIONS(13),
  },
  [3] = {
    [sym_parethesized] = STATE(3),
    [sym_arrow] = STATE(3),
    [sym_apply] = STATE(3),
    [sym__term] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_whitespace] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(15),
    [anon_sym_DASH_GT] = ACTIONS(15),
  },
  [4] = {
    [sym_parethesized] = STATE(3),
    [sym_arrow] = STATE(3),
    [sym_apply] = STATE(3),
    [sym__term] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_whitespace] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(13),
  },
  [5] = {
    [sym_parethesized] = STATE(3),
    [sym_arrow] = STATE(3),
    [sym_apply] = STATE(3),
    [sym__term] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_whitespace] = ACTIONS(19),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(19),
  },
  [6] = {
    [sym_parethesized] = STATE(3),
    [sym_arrow] = STATE(3),
    [sym_apply] = STATE(3),
    [sym__term] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_whitespace] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_DASH_GT] = ACTIONS(13),
  },
  [7] = {
    [sym_parethesized] = STATE(3),
    [sym_arrow] = STATE(3),
    [sym_apply] = STATE(3),
    [sym__term] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_whitespace] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_DASH_GT] = ACTIONS(13),
  },
  [8] = {
    [sym_parethesized] = STATE(3),
    [sym_arrow] = STATE(3),
    [sym_apply] = STATE(3),
    [sym__term] = STATE(3),
    [sym_whitespace] = ACTIONS(25),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_DASH_GT] = ACTIONS(13),
  },
  [9] = {
    [sym_parethesized] = STATE(3),
    [sym_arrow] = STATE(3),
    [sym_apply] = STATE(3),
    [sym__term] = STATE(3),
    [sym_whitespace] = ACTIONS(29),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(13),
  },
  [10] = {
    [sym_parethesized] = STATE(5),
    [sym_arrow] = STATE(5),
    [sym_apply] = STATE(5),
    [sym__term] = STATE(5),
    [sym_identifier] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(37),
  },
  [11] = {
    [sym_parethesized] = STATE(5),
    [sym_arrow] = STATE(5),
    [sym_apply] = STATE(5),
    [sym__term] = STATE(5),
    [sym_identifier] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(37),
  },
  [12] = {
    [sym_parethesized] = STATE(8),
    [sym_arrow] = STATE(8),
    [sym_apply] = STATE(8),
    [sym__term] = STATE(8),
    [sym_whitespace] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
  [13] = {
    [sym_parethesized] = STATE(5),
    [sym_arrow] = STATE(5),
    [sym_apply] = STATE(5),
    [sym__term] = STATE(5),
    [sym_identifier] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_DASH_GT] = ACTIONS(37),
  },
  [14] = {
    [sym_parethesized] = STATE(6),
    [sym_arrow] = STATE(6),
    [sym_apply] = STATE(6),
    [sym__term] = STATE(6),
    [sym_whitespace] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
  [15] = {
    [sym_parethesized] = STATE(4),
    [sym_arrow] = STATE(4),
    [sym_apply] = STATE(4),
    [sym__term] = STATE(4),
    [sym_whitespace] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
  [16] = {
    [sym_parethesized] = STATE(9),
    [sym_arrow] = STATE(9),
    [sym_apply] = STATE(9),
    [sym__term] = STATE(9),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
  [17] = {
    [sym_parethesized] = STATE(4),
    [sym_arrow] = STATE(4),
    [sym_apply] = STATE(4),
    [sym__term] = STATE(4),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_whitespace] = ACTIONS(53),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_DASH_GT] = ACTIONS(53),
  },
  [19] = {
    [sym_parethesized] = STATE(2),
    [sym_arrow] = STATE(2),
    [sym_apply] = STATE(2),
    [sym__term] = STATE(2),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_whitespace] = ACTIONS(57),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(57),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_whitespace] = ACTIONS(59),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(59),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(7),
  [5] = {.count = 1, .reusable = true}, SHIFT(12),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_arrow, 5),
  [9] = {.count = 1, .reusable = true}, SHIFT(13),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(14),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_apply, 2),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_arrow, 4),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_apply, 3),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_arrow, 3),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(21),
  [29] = {.count = 1, .reusable = true}, SHIFT(10),
  [31] = {.count = 1, .reusable = true}, SHIFT(18),
  [33] = {.count = 1, .reusable = true}, SHIFT(5),
  [35] = {.count = 1, .reusable = true}, SHIFT(20),
  [37] = {.count = 1, .reusable = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = true}, SHIFT(16),
  [41] = {.count = 1, .reusable = true}, SHIFT(8),
  [43] = {.count = 1, .reusable = true}, SHIFT(17),
  [45] = {.count = 1, .reusable = true}, SHIFT(6),
  [47] = {.count = 1, .reusable = true}, SHIFT(19),
  [49] = {.count = 1, .reusable = true}, SHIFT(4),
  [51] = {.count = 1, .reusable = true}, SHIFT(9),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_parethesized, 4),
  [55] = {.count = 1, .reusable = true}, SHIFT(2),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_parethesized, 5),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_parethesized, 3),
  [61] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sandbox(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
