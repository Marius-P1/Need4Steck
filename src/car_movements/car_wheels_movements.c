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
    if (angle > 1.0000) {
        printf("WHEELS_DIR:-%.2f\n", 1.00);
        fflush(stdout);
        return;
    }
    if (angle < 0.0000) {
        printf("WHEELS_DIR:-%.2f\n", 0.00);
        fflush(stdout);
        return;
    }
    printf("WHEELS_DIR:-%.2f\n", angle);
    fflush(stdout);
}

void turn_right(float angle)
{
    if (angle > 1.0000) {
        printf("WHEELS_DIR:%.2f\n", 1.00);
        fflush(stdout);
        return;
    }
    if (angle < 0.0000) {
        printf("WHEELS_DIR:%.2f\n", 0.00);
        fflush(stdout);
        return;
    }
    printf("WHEELS_DIR:%.2f\n", angle);
    fflush(stdout);
}
