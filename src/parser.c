#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 12
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
  aux_sym_apply_repeat1 = 11,
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
  [aux_sym_apply_repeat1] = "apply_repeat1",
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
  [aux_sym_apply_repeat1] = aux_sym_apply_repeat1,
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
  [aux_sym_apply_repeat1] = {
    .visible = false,
    .named = false,
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
    [sym_source_file] = STATE(19),
    [sym_parethesized] = STATE(14),
    [sym_arrow] = STATE(14),
    [sym_apply] = STATE(14),
    [sym__term] = STATE(14),
    [sym_identifier] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
  [2] = {
    [sym_parethesized] = STATE(15),
    [sym_arrow] = STATE(15),
    [sym_apply] = STATE(15),
    [sym__term] = STATE(15),
    [sym_whitespace] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
  [3] = {
    [sym_parethesized] = STATE(12),
    [sym_arrow] = STATE(12),
    [sym_apply] = STATE(12),
    [sym__term] = STATE(12),
    [sym_whitespace] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(16), 4,
      sym_parethesized,
      sym_arrow,
      sym_apply,
      sym__term,
  [13] = 3,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(12), 4,
      sym_parethesized,
      sym_arrow,
      sym_apply,
      sym__term,
  [26] = 3,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(9), 4,
      sym_parethesized,
      sym_arrow,
      sym_apply,
      sym__term,
  [39] = 3,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(13), 4,
      sym_parethesized,
      sym_arrow,
      sym_apply,
      sym__term,
  [52] = 2,
    STATE(11), 1,
      aux_sym_apply_repeat1,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      sym_whitespace,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [62] = 2,
    STATE(8), 1,
      aux_sym_apply_repeat1,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      sym_whitespace,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [72] = 2,
    STATE(8), 1,
      aux_sym_apply_repeat1,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      sym_whitespace,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [82] = 3,
    ACTIONS(27), 1,
      sym_whitespace,
    STATE(11), 1,
      aux_sym_apply_repeat1,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [94] = 2,
    STATE(8), 1,
      aux_sym_apply_repeat1,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      sym_whitespace,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [104] = 2,
    STATE(8), 1,
      aux_sym_apply_repeat1,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      sym_whitespace,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [114] = 2,
    STATE(8), 1,
      aux_sym_apply_repeat1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      sym_whitespace,
      anon_sym_DASH_GT,
  [123] = 2,
    STATE(8), 1,
      aux_sym_apply_repeat1,
    ACTIONS(23), 3,
      sym_whitespace,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [132] = 2,
    STATE(8), 1,
      aux_sym_apply_repeat1,
    ACTIONS(23), 3,
      sym_whitespace,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [141] = 1,
    ACTIONS(30), 4,
      ts_builtin_sym_end,
      sym_whitespace,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [148] = 1,
    ACTIONS(32), 4,
      ts_builtin_sym_end,
      sym_whitespace,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [155] = 1,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 13,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 39,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 62,
  [SMALL_STATE(10)] = 72,
  [SMALL_STATE(11)] = 82,
  [SMALL_STATE(12)] = 94,
  [SMALL_STATE(13)] = 104,
  [SMALL_STATE(14)] = 114,
  [SMALL_STATE(15)] = 123,
  [SMALL_STATE(16)] = 132,
  [SMALL_STATE(17)] = 141,
  [SMALL_STATE(18)] = 148,
  [SMALL_STATE(19)] = 155,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(14),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, SHIFT(15),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, SHIFT(12),
  [15] = {.count = 1, .reusable = true}, SHIFT(16),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(13),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_apply, 2),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_apply, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(aux_sym_apply_repeat1, 2),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_apply_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.count = 1, .reusable = true}, REDUCE(sym_parethesized, 4),
  [32] = {.count = 1, .reusable = true}, REDUCE(sym_parethesized, 5),
  [34] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
