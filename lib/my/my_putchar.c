/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_putchar
*/

#include "lib.h"

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
