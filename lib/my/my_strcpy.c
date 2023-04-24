/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strcpy
*/

#include "lib.h"

#include <stdlib.h>

char *my_strcpy(char *str)
{
    char *copy = malloc(sizeof(char) * (my_strlen(str) + 1));

    if (copy == NULL)
        return NULL;
    for (int i = 0; str[i] != '\0'; i++)
        copy[i] = str[i];
    copy[my_strlen(str)] = '\0';
    return copy;
}
