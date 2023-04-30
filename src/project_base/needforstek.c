/*
** EPITECH PROJECT, 2023
** Need4Steck
** File description:
** Need4Steck.c
*/

#include "nfs.h"
#include <stdio.h>
#include <stdlib.h>

void init_struct(nfs_returns_t *global)
{
    global->speed = 0.0;
    global->dir = 0.0;
    global->old_dir = 0.0;
    global->old_speed = 0.0;
}

int start_simulation(void)
{
    bool error = false;
    bool finish = false;

    fprintf(stdout, "START_SIMULATION\n");
    fflush(stdout);
    get_no_error_infos_bool(&error, &finish);
    if (error == true)
        return 84;
    return 0;
}

int stop_simulation(void)
{
    bool error = false;
    bool finish = false;

    fprintf(stdout, "CAR_FORWARD:0\n");
    fflush(stdout);
    get_no_error_infos_bool(&error, &finish);
    if (error == true)
        return 84;
    fprintf(stdout, "STOP_SIMULATION\n");
    fflush(stdout);
    get_no_error_infos_bool(&error, &finish);
    if (error == true)
        return 84;
    return 0;
}

int needforstek(int argc, char **argv)
{
    int finish = 0;
    nfs_returns_t *global = malloc(sizeof(nfs_returns_t));

    if (global == NULL)
        return 84;
    if (error_handling_args(argc, argv) != 0)
        return 84;
    init_struct(global);
    if (start_simulation() != 0)
        return 84;
    while (finish != 1) {
        finish = control_loop(global);
        if (finish == 84)
            return 84;
    }
    if (stop_simulation() != 0)
        return 84;
    return 0;
}
