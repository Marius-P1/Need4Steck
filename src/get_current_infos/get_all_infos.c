/*
** EPITECH PROJECT, 2023
** get_all_infos.c
** File description:
** Handle all the command reception
*/

#include "nfs.h"
#include <stdio.h>

void get_general_infos(return_type_t type, nfs_returns_t *infos)
{
    switch (type) {
        case LIDAR:
            return get_lidar_infos(infos);
        case SPEED:
            return get_speed_infos(infos);
        case WHEELS_DIR:
            return get_wheels_dir_infos(infos);
        case MAX_SPEED:
            return get_max_speed_infos(infos);
        case MIN_SPEED:
            return get_min_speed_infos(infos);
        case NO_ERROR:
            return get_no_error_infos(infos);
        default:
            break;
    }
}
