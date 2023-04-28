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
    if (angle > 1) {
        printf("WHEELS_DIR:-%.1f\n", 1.0);
        fflush(stdout);
        return;
    }
    if (angle < 0) {
        printf("WHEELS_DIR:-%.1f\n", 0.0);
        fflush(stdout);
        return;
    }
    printf("WHEELS_DIR:-%.1f\n", angle);
    fflush(stdout);
}

void turn_right(float angle)
{
    if (angle > 1) {
        printf("WHEELS_DIR:%.1f\n", 1.0);
        fflush(stdout);
        return;
    }
    if (angle < 0) {
        printf("WHEELS_DIR:%.1f\n", 0.0);
        fflush(stdout);
        return;
    }
    printf("WHEELS_DIR:%.1f\n", angle);
    fflush(stdout);
}
