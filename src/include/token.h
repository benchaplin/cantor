#ifndef CAN_TOKEN_H
#define CAN_TOKEN_H
typedef struct TOKEN_STRUCT
{
    char* value;
    enum
    {
        TOKEN_ID,
        TOKEN_INT,
        TOKEN_EQ,
        TOKEN_LPAREN,
        TOKEN_RPAREN,
        TOKEN_LBRACE,
        TOKEN_RBRACE,
        TOKEN_IN,
        TOKEN_COLON,
        TOKEN_LT,
        TOKEN_GT,
        TOKEN_EOF
    } type;
} token_T;

token_T* init_token(char* value, int type);
#endif
