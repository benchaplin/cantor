#include "include/can.h"
#include "include/lexer.h"
#include "include/parser.h"
#include "include/io.h"
#include "include/token.h"
#include <stdlib.h>

void compile_can(char* src)
{
    lexer_T* lexer = init_lexer(src);
    parser_T* parser = init_parser(lexer);
    AST_T* root = parser_parse(parser);

    token_T* token = 0;
    while ((token = lexer_next_token(lexer))->type != TOKEN_EOF)
    {
        printf("<%s> value:`%s`, type: %d\n", get_token_string(token), token->value, token->type);
    }
}

void compile_can_file(char* filename)
{
    char* src = read_file(filename);
    compile_can(src);
    free(src);
}

