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

static void get_lidar_values(char **tab, nfs_returns_t *infos)
{
    int i = 3;
    int j = 0;

    if (infos->lidar == NULL)
        return;
    for (; tab[i] != NULL || j < i + 32; i++) {
        infos->lidar[i] = atof(tab[i]);
    }
}

static void get_lidar(char *line, nfs_returns_t *infos)
{
    char **tab = my_str_to_word_array(line, ':');

    if (tab == NULL || my_arraylen(tab) != 36 || my_arraylen(tab) != 38)
        return;
    get_lidar_values(tab, infos);
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
}

void get_lidar_infos(nfs_returns_t *infos)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;

    if (infos == NULL)
        return;
    my_putstr("GET_INFO_LIDAR\n");
    read = getline(&line, &len, stdin);
    if (read == -1)
        return;
    infos->data = 0;
    infos->type = LIDAR;
    infos->error = check_error(line, infos);
    infos->finish = check_finish(line);
    get_lidar(line, infos);
    free(line);
}
