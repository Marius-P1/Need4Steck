/*
** EPITECH PROJECT, 2023
** get_min_max_speed.c
** File description:
** Functions to get the car min and max speed
*/

#include "nfs.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

n4s_returns_t *get_max_speed_infos(void)
{
    n4s_returns_t *infos = malloc(sizeof(n4s_returns_t));
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;

    if (infos == NULL)
        return NULL;
    my_putstr("GET_CAR_SPEED_MAX\n");
    read = getline(&line, &len, stdin);
    if (read == -1)
        return NULL;
    infos->data = get_value(line);
    infos->type = MAX_SPEED;
    infos->lidar = NULL;
    infos->error = check_error(line, infos);
    infos->finish = check_finish(line);
    free(line);
    return infos;
}

n4s_returns_t *get_min_speed_infos(void)
{
    n4s_returns_t *infos = malloc(sizeof(n4s_returns_t));
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;

    if (infos == NULL)
        return NULL;
    my_putstr("GET_CAR_SPEED_MIN\n");
    read = getline(&line, &len, stdin);
    if (read == -1)
        return NULL;
    infos->data = get_value(line);
    infos->type = MIN_SPEED;
    infos->lidar = NULL;
    infos->error = check_error(line, infos);
    infos->finish = check_finish(line);
    free(line);
    return infos;
}
