/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strncat
*/

#include "lib.h"

#include <stdlib.h>

char* my_strncat(char* dest, const char* src, int n)
{
    int pos = 0;
    char* str = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));

    for (int i = 0; dest[i] != '\0'; i++, pos++) {
        str[pos] = dest[i];
    }
    for (int i = 0; src[i] != '\0' && i < n; i++, pos++) {
        str[pos] = src[i];
    }
    str[pos] = '\0';
    return str;
}

char* my_strkcat(char* dest, const char* src)
{
    int pos = 0;
    char* str = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));

    for (int i = 0; dest[i] != '\0'; i++, pos++) {
        str[pos] = dest[i];
    }
    for (int i = 0; src[i] != '\0' && src[i] != '\n'; i++, pos++) {
        str[pos] = src[i];
    }
    str[pos] = '\0';
    return str;
}
