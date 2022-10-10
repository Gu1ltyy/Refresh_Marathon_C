#include "unistd.h"

void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    if (argc < 2)
        return 0;

    char *temp;

    for (int i = 1; i < argc; i++) {
        for (int j = 1; j < argc - 1; j++) {
            if (mx_strcmp(argv[j], argv[j + 1]) > 0) {
                temp = argv[j + 1];
                argv[j + 1] = argv[j];
                argv[j] = temp;
            }
        }
    }

    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }

    return 0;
}

