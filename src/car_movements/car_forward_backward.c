/*
** EPITECH PROJECT, 2023
** car_forward_backward.c
** File description:
** handle the forward and backwards movements of the care
** using more simple functions
*/

#include "nfs.h"
#include <stdio.h>

void go_forward(float speed)
{
    if (speed > 1) {
        printf("CAR_FORWARD:%.1f\n", 1);
        return;
    }
    if (speed < 0) {
        printf("CAR_FORWARD:%.1f\n", 0);
        return;
    }
    printf("CAR_FORWARD:%.1f\n", 1);
}

void go_backward(float speed)
{
    if (speed > 1) {
        printf("CAR_BACKWARDS:%.1f\n", 1);
        return;
    }
    if (speed < 0) {
        printf("CAR_BACKWARDS:%.1f\n", 0);
        return;
    }
    printf("CAR_BACKWARDS:%.1f\n", 1);
}
