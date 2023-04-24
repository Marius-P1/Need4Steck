/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strncmp
*/

#include "lib.h"

int my_strncmp(char *s1, char *s2, int n)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}
