/*
** EPITECH PROJECT, 2023
** main_error_handling.c
** File description:
** Handle the main errors
*/

#include "nfs.h"

int error_handling_args(int argc, char **argv)
{
    if (argc == 2 && argv[1][0] == '-' &&
    argv[1][1] == 'h' && argv[1][2] == '\0')
        return display_help();
    if (argc != 1)
        return 84;
    return 0;
}
