/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_arraycpy
*/

#include "lib.h"

#include <stdlib.h>

char **my_arraycpy(char **array)
{
    int i = 0;
    char **new_array = malloc(sizeof(char *) * (my_arraylen(array) + 1));

    if (new_array == NULL)
        return (NULL);
    for (; array[i] != NULL; i++)
        new_array[i] = my_strcpy(array[i]);
    new_array[i] = NULL;
    return (new_array);
}
