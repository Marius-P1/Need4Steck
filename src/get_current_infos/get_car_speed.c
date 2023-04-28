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

    if (tab == NULL)
        return 0;
    value = atof(tab[3]);
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
    return value;
}

n4s_returns_t *get_speed_infos(void)
{
    n4s_returns_t *infos = malloc(sizeof(n4s_returns_t));
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;

    if (infos == NULL)
        return NULL;
    my_putstr("GET_CURRENT_SPEED\n");
    read = getline(&line, &len, stdin);
    if (read == -1)
        return NULL;
    infos->data = get_value(line);
    infos->type = SPEED;
    infos->lidar = NULL;
    infos->error = check_error(line, infos);
    infos->finish = check_finish(line);
    free(line);
    return infos;
}
