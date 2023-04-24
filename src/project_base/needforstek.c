/*
** EPITECH PROJECT, 2023
** Need4Steck
** File description:
** Need4Steck.c
*/

#include "nfs.h"

int needforstek(int argc, char **argv)
{
    if (error_handling_args(argc, argv) != 0)
        return 84;
    return 0;
}
