/*
** EPITECH PROJECT, 2022
** Need4Stek
** File description:
** car_is_blocked.c
*/

#include <stdbool.h>

int car_is_blocked(float *lidar)
{
    if (sizeof(lidar) != 32)
        return 84;
    if (lidar[0] < 0.5 || lidar[31] < 0.5) {
        return 1;
    } else {
        return 0;
    }
}
