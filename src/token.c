#include "include/token.h"
#include <stdlib.h>

token_T* init_token(char* value, int type)
{
    token_T* token = calloc(1, sizeof(struct TOKEN_STRUCT));
    token->value = value;
    token->type = type;

    return token;
}

char* get_token_string(token_T* token) 
{
    switch (token->type)
    {
        case TOKEN_ID: return "TOKEN_ID"; break;
        case TOKEN_INT: return "TOKEN_INT"; break;
        case TOKEN_EQ: return "TOKEN_EQ"; break;
        case TOKEN_LPAREN: return "TOKEN_LPAREN"; break;
        case TOKEN_RPAREN: return "TOKEN_RPAREN"; break;
        case TOKEN_LBRACE: return "TOKEN_LBRACE"; break;
        case TOKEN_RBRACE: return "TOKEN_RBRACE"; break;
        case TOKEN_IN: return "TOKEN_IN"; break;
        case TOKEN_COLON: return "TOKEN_COLON"; break;
        case TOKEN_LT: return "TOKEN_LT"; break;
        case TOKEN_GT: return "TOKEN_GT"; break;
        case TOKEN_EOF: return "TOKEN_EOF"; break;
    }
}
