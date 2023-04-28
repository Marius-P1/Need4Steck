/*
** EPITECH PROJECT, 2023
** get_no_error_infos.c
** File description:
** functions that checks if the returns of our calls are good or not
*/

#include "nfs.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

bool check_finish(char *line)
{
    char **tab = my_str_to_word_array(line, ':');
    int tab_len = my_arraylen(tab);

    if (tab == NULL)
        return false;
    if (my_strncmp(tab[tab_len - 2], "Track Cleared", 13) == 0)
        return true;
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
    return false;
}

bool check_error(char *line, n4s_returns_t *infos)
{
    char **tab = my_str_to_word_array(line, ':');
    int tab_len = my_arraylen(tab);

    if (tab == NULL)
        return false;
    if (my_strncmp(tab[tab_len - 2], "CP Cleared", 10) == 0)
        infos->cp_cleared = true;
    else
        infos->cp_cleared = false;
    if (my_strcmp(tab[2], "No errors so far") == 0
    && my_strcmp(tab[1], "OK") == 0)
        return false;
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
    return true;
}

n4s_returns_t *get_no_error_infos(void)
{
    n4s_returns_t *infos = malloc(sizeof(n4s_returns_t));
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;

    if (infos == NULL)
        return NULL;
    my_putstr("GET_INFO_SIMTIME\n");
    read = getline(&line, &len, stdin);
    if (read == -1)
        return NULL;
    infos->data = 0;
    infos->type = NO_ERROR;
    infos->lidar = NULL;
    infos->error = check_error(line, infos);
    infos->finish = check_finish(line);
    return infos;
}
