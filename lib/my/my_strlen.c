/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strlen
*/

#include "lib.h"

#include <stdlib.h>

int my_strlen(const char *str)
{
    int i = 0;

    if (str == NULL)
        return (0);
    while (str[i] != '\0')
        i++;
    return (i);
}
