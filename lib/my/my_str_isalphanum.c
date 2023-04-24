/*
** EPITECH PROJECT, 2022
** my_str_isalpha
** File description:
** A function that returns 1 if the
** string passed as parameter only
** contains alphabetical characters and 0
** if the string contains another type of character.
*/

#include "lib.h"

bool my_str_isalphanum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')
        && (str[i] < '0' || str[i] > '9')) {
            return false;
        }
        i = i + 1;
    }
    return true;
}

bool my_char_isalphanum(char const c)
{
    if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z')
    && (c < '0' || c > '9')) {
        return false;
    }
    return true;
}
