/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** my_putstr
*/

#include "lib.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}
