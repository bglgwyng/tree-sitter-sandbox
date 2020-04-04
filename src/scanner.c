#include <stdio.h>
#include <tree_sitter/parser.h>

enum TokenType
{
  WHITESPACE,
  NEWLINE,
};

void *tree_sitter_sandbox_external_scanner_create()
{
  return NULL;
}

void tree_sitter_sandbox_external_scanner_destroy(void *payload)
{
}

unsigned tree_sitter_sandbox_external_scanner_serialize(void *payload, char *buffer)
{
  return 0;
}

void tree_sitter_sandbox_external_scanner_deserialize(void *payload, const char *buffer, unsigned length)
{
}

bool tree_sitter_sandbox_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols)
{
  if(lexer->lookahead != 0) {
    // each call increases the line number of spans.
    lexer->get_column(lexer);
    lexer->get_column(lexer);
  }
  
  bool at_least_one = false;
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t')
  {
    at_least_one = true;
    lexer->advance(lexer, false);
  }
  return at_least_one && valid_symbols[WHITESPACE];
}