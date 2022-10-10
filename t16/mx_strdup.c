#include "stdio.h"
#include "stdlib.h"

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    int size = mx_strlen(str);

    if (size < 0)
        return NULL;
    char *dst = mx_strnew(size);
    mx_strcpy(dst, str);

    return dst;
}

