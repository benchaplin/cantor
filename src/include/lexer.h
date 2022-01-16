#ifndef CAN_LEXER_H
#define CAN_LEXER_H
#include "token.h"
#include <stdio.h>

typedef struct LEXER_STRUCT
{
    char* src;
    size_t src_size;
    char c;
    unsigned int i;
} lexer_T;

lexer_T* init_lexer(char* src);

void lexer_advance(lexer_T* lexer);

token_T* lexer_advance_with(lexer_T* lexer, token_T* token);

void lexer_skip_whitespace(lexer_T* lexer);

token_T* lexer_parse_id(lexer_T* lexer);

token_T* lexer_next_token(lexer_T* lexer);
#endif

