/*
** EPITECH PROJECT, 2023
** get_lidar_infos.c
** File description:
** functions that handle the get_info_lidar function
*/

#include "nfs.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static float *get_lidar_values(char **tab)
{
    float *lidar = malloc(sizeof(float) * 32);
    int i = 3;

    if (lidar == NULL)
        return NULL;
    for (; tab[i] != NULL; i++) {
        lidar[i] = atof(tab[i]);
    }
    return lidar;
}

static float *get_lidar(char *line)
{
    char **tab = my_str_to_word_array(line, ':');
    float *lidar = NULL;

    if (tab == NULL)
        return NULL;
    lidar = get_lidar_values(tab);
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
    return lidar;
}

nfs_returns_t *get_lidar_infos(void)
{
    nfs_returns_t *infos = malloc(sizeof(nfs_returns_t));
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;

    if (infos == NULL)
        return NULL;
    my_putstr("GET_INFO_LIDAR\n");
    read = getline(&line, &len, stdin);
    if (read == -1)
        return NULL;
    infos->data = 0;
    infos->type = LIDAR;
    infos->lidar = get_lidar(line);
    infos->error = check_error(line, infos);
    infos->finish = check_finish(line);
    free(line);
    return infos;
}
