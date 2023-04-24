/*
** EPITECH PROJECT, 2023
** help_display.c
** File description:
** Functions that display the help
*/

#include "nfs.h"
#include <unistd.h>

int display_help(void)
{
    write(1, "\nUSAGE\n", 7);
    write(1, "\t./pipes.sh\n", 12);
    write(1, "\nDESCRIPTION\n", 13);
    write(1, "\tpipes.sh", 9);
    write(1, "\tlaunch the pipes program and the ai\n\n", 38);
    return 1;
}
