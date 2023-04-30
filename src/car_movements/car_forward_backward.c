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
    if (speed > 1.0000) {
        printf("CAR_FORWARD:%.2f\n", 1.00);
        fflush(stdout);
        return;
    }
    if (speed < 0.0000) {
        printf("CAR_FORWARD:%.2f\n", 0.00);
        fflush(stdout);
        return;
    }
    printf("CAR_FORWARD:%.2f\n", speed);
    fflush(stdout);
}

void go_backward(float speed)
{
    if (speed > 1.0000) {
        printf("CAR_BACKWARDS:%.2f\n", 1.00);
        fflush(stdout);
        return;
    }
    if (speed < 0.0000) {
        printf("CAR_BACKWARDS:%.2f\n", 0.00);
        fflush(stdout);
        return;
    }
    printf("CAR_BACKWARDS:%.2f\n", speed);
    fflush(stdout);
}
