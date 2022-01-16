#ifndef CAN_TOKEN_H
#define CAN_TOKEN_H
typedef struct TOKEN_STRUCT
{
    char* value;
    enum
    {
        TOKEN_ID,
        TOKEN_EQUALS,
        TOKEN_L_BRACE,
        TOKEN_R_BRACE,
        TOKEN_IN,
        TOKEN_COLON,
        TOKEN_L_THAN,
        TOKEN_G_THAN,
        TOKEN_INT,
        TOKEN_EOF
    } type;
} token_T;

token_T* init_token(char* value, int type);
#endif
