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
    if (speed > 1 || speed < 0)
        return;
    printf("CAR_FORWARD:%.1f\n", speed);
}

void go_backward(float speed)
{
    if (speed > 1 || speed < 0)
        return;
    printf("CAR_BACKWARDS:%.1f\n", speed);
}
