/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_arraylen
*/

#include "lib.h"

#include <stdlib.h>

int my_arraylen(char **array)
{
    int i = 0;

    for (; array[i] != NULL; i++);
    return (i);
}
