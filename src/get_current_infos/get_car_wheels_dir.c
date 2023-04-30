/*
** EPITECH PROJECT, 2023
** get_car_wheels_dir.c
** File description:
** Functions to get the car wheels dir
*/

#include "nfs.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void get_wheels_dir_infos(nfs_returns_t *infos)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;

    if (infos == NULL)
        return;
    my_putstr("GET_CURRENT_WHEELS\n");
    read = getline(&line, &len, stdin);
    if (read == -1)
        return;
    infos->data = get_value(line);
    infos->type = WHEELS_DIR;
    infos->error = check_error(line, infos);
    infos->finish = check_finish(line);
    free(line);
}
