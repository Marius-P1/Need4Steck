/*
** EPITECH PROJECT, 2022
** Need4Stek
** File description:
** car_is_blocked.c
*/

#include <stdbool.h>

int car_is_blocked(float *lidar)
{
    bool is_blocked = false;

    if (lidar[0] < 0.5 || lidar[31] < 0.5)
        is_blocked = true;

    if (is_blocked == true)
        return 1;
    else
        return 0;
}
