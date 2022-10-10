#include "stdio.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    if (!hex)
        return NULL;

    int lenght = 0;
    long res = 0;
    long temp;
    int i = 0;
    long value;

    while (hex[lenght] != '\0')
        lenght++;

    while (hex[i] != '\0') {
        if (hex[i] >= '0' && hex[i] <= '9')
            value = hex[i] - 48;
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            value = hex[i] - 65 + 10;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            value = hex[i] - 97 + 10;
        else
            return 0;
        
        temp = 1;
        for (long j = 0; j < lenght; j++) 
            temp *= 16;
        
        res += value * temp;;
        lenght--;
        i++;
    }

    return res;
}

