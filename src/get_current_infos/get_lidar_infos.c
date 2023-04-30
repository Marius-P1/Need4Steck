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

static void get_lidar(char *line, float *front, float *right, float *left)
{
    char **tab = my_str_to_word_array(line, ':');

    if (tab == NULL || my_arraylen(tab) < 35)
        return;
    *front = (atof(tab[18]) + atof(tab[19])) / 2;
    *right = (atof(tab[4]) + atof(tab[5])) / 2;
    *left = (atof(tab[33]) + atof(tab[34])) / 2;
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
}

int get_lidar_infos(float *front, float *right, float *left)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;

    my_putstr("GET_INFO_LIDAR\n");
    read = getline(&line, &len, stdin);
    if (read == -1)
        return 84;
    if (check_error(line))
        return 84;
    if (check_finish(line))
        return 1;
    get_lidar(line, front, right, left);
    free(line);
    return 0;
}
