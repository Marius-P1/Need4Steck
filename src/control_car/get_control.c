/*
** EPITECH PROJECT, 2023
** Need4Steck
** File description:
** get_control
*/

#include "nfs.h"
#include <stdlib.h>
#include <stdio.h>

float get_dir(float distance)
{

    if (distance >= 2000)
        return 0.01;
    if (distance >= 1000)
        return 0.01;
    if (distance >= 500)
        return 0.15;
    if (distance >= 200)
        return 0.30;
    if (distance >= 100)
        return 0.55;
    if (distance < 100)
        return 0.70;
    return 0.90;
}

float get_speed(float distance)
{
    if (distance >= 2000)
        return 0.55;
    if (distance >= 1000)
        return 0.35;
    if (distance >= 500)
        return 0.25;
    if (distance >= 200)
        return 0.15;
    if (distance >= 100)
        return 0.05;
    if (distance < 100)
        return 0.05;
    return 0.05;
}

float set_car_speed3(float distance, nfs_returns_t *global, bool *finish,
bool *error)
{
    if (distance >= 100) {
        if (global->old_speed == 0.05)
            return (0.55);
        printf("CAR_FORWARD:0.05\n");
        fflush(stdout);
        get_no_error_infos_bool(error, finish);
        global->old_speed = 0.05;
        return (0.55);
    }
    if (distance < 100) {
        if (global->old_speed == 0.05)
            return (0.7);
        printf("CAR_FORWARD:0.05\n");
        fflush(stdout);
        get_no_error_infos_bool(error, finish);
        global->old_speed = 0.05;
        return (0.7);
    }
    return (1.0);
}

float set_car_speed2(float distance, nfs_returns_t *global, bool *finish,
bool *error)
{
    if (distance >= 500) {
        if (global->old_speed == 0.25)
            return (0.15);
        printf("CAR_FORWARD:0.25\n");
        fflush(stdout);
        get_no_error_infos_bool(error, finish);
        global->old_speed = 0.25;
        return (0.15);
    }
    if (distance >= 200) {
        if (global->old_speed == 0.15)
            return (0.3);
        printf("CAR_FORWARD:0.15\n");
        fflush(stdout);
        get_no_error_infos_bool(error, finish);
        global->old_speed = 0.15;
        return (0.3);
    }
    return set_car_speed3(distance, global, finish, error);
}

float set_car_speed(float distance, nfs_returns_t *global,
bool *finish, bool *error)
{
    if (distance >= 2000) {
        if (global->old_speed == 0.55)
            return (0.01);
        printf("CAR_FORWARD:0.55\n");
        fflush(stdout);
        get_no_error_infos_bool(error, finish);
        global->old_speed = 0.55;
        return (0.01);
    }
    if (distance >= 1000) {
        if (global->old_speed == 0.35)
            return (0.01);
        printf("CAR_FORWARD:0.35\n");
        fflush(stdout);
        get_no_error_infos_bool(error, finish);
        global->old_speed = 0.35;
        return (0.01);
    }
    return set_car_speed2(distance, global, finish, error);
}
