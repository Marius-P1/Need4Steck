/*
** EPITECH PROJECT, 2023
** get_all_infos.c
** File description:
** Handle all the command reception
*/

#include "nfs.h"
#include <stdio.h>

nfs_returns_t *get_general_infos(return_type_t type)
{
    switch (type) {
        case LIDAR:
            return get_lidar_infos();
        case SPEED:
            return get_speed_infos();
        case WHEELS_DIR:
            return get_wheels_dir_infos();
        case MAX_SPEED:
            return get_max_speed_infos();
        case MIN_SPEED:
            return get_min_speed_infos();
        case NO_ERROR:
            return get_no_error_infos();
        default:
            break;
    }
    return NULL;
}
