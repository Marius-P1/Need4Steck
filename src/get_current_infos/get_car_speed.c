/*
** EPITECH PROJECT, 2023
** get_car_speed.c
** File description:
** Functions to get the car speed
*/

#include "nfs.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

float get_value(char *line)
{
    char **tab = my_str_to_word_array(line, ':');
    float value = 0;

    if (tab == NULL || (my_arraylen(tab) != 4 && my_arraylen(tab) != 6))
        return 0;
    value = atof(tab[3]);
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
    return value;
}

void get_speed_infos(nfs_returns_t *infos)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;

    if (infos == NULL)
        return;
    my_putstr("GET_CURRENT_SPEED\n");
    read = getline(&line, &len, stdin);
    if (read == -1)
        return;
    infos->data = get_value(line);
    infos->type = SPEED;
    infos->error = check_error(line, infos);
    infos->finish = check_finish(line);
    free(line);
}
