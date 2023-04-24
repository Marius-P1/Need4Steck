/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_cleanstr
*/

#include "lib.h"

#include <stdlib.h>

static int count_spaces(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] == ' ')
            count++;
        i++;
    }
    return (count);
}

char *my_cleanstr(char *str)
{
    char *clean = malloc(sizeof(char) * (my_strlen(str) +
    1 - count_spaces(str)));

    for (int i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            clean[j] = str[i];
            j++;
        }
    }
    clean[my_strlen(str) - count_spaces(str)] = '\0';
    return clean;
}
