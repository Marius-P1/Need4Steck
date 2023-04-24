/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_put_nbr
*/

#include "lib.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    while (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
        nb = nb / 10;
    }
    my_putchar(nb + '0');
    return (0);
}
