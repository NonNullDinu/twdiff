#ifndef TOKENS_H
#define TOKENS_H
#include <regex.h>
typedef struct {
    int type;
    char data[256];
} TOKEN;

typedef struct {
    int type;
    char blueprint[256];
    regex_t regex;
} B_TOKEN;
#endif