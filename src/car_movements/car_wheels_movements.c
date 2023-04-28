/*
** EPITECH PROJECT, 2023
** car_wheels_movements.c
** File description:
** Handle the movement of the wheels
*/

#include "nfs.h"
#include <stdio.h>

void turn_left(float angle)
{
    if (angle > 1 || angle < 0)
        return;
    printf("WHEELS_DIR:-%.1f\n", angle);
}

void turn_right(float angle)
{
    if (angle > 1 || angle < 0)
        return;
    printf("WHEELS_DIR:%.1f\n", angle);
}
