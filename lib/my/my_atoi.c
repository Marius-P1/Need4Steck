/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_atoi
*/

#include "lib.h"

int my_atoi(char *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        nb = nb * 10 + str[i] - '0';
        i++;
    }
    return (nb);
}
