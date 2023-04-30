/*
** EPITECH PROJECT, 2023
** n4s
** File description:
** control_loop
*/

#include "nfs.h"
#include "nfs_returns.h"
#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int update_control(float dir, float right, float left)
{
    bool error = false;
    bool finish = false;

    if (right < left) {
        printf("WHEELS_DIR:%.2f\n", dir * -1.0);
        fprintf(stderr, "WHEELS_DIR:%.2f\n", dir * -1.0);
    } else if (right > left) {
        printf("WHEELS_DIR:%.2f\n", dir);
        fprintf(stderr, "WHEELS_DIR:%.2f\n", dir);
    } else {
        printf("WHEELS_DIR:0\n");
    }
    fflush(stdout);
    get_no_error_infos_bool(&error, &finish);
    if (error == true)
        return 84;
    if (finish == true)
        return 1;
    return 0;
}

void turned_right(void)
{
    bool error = false;
    bool finish = false;

    turn_right(0.5);
    get_no_error_infos_bool(&error, &finish);
    usleep(300000);
    go_backward(0.1);
    get_no_error_infos_bool(&error, &finish);
    usleep(300000);
    turn_right(0);
    get_no_error_infos_bool(&error, &finish);
    go_forward(0.1);
    get_no_error_infos_bool(&error, &finish);
}

void turned_left(void)
{
    bool error = false;
    bool finish = false;

    turn_left(0.5);
    get_no_error_infos_bool(&error, &finish);
    usleep(300000);
    go_backward(0.1);
    get_no_error_infos_bool(&error, &finish);
    usleep(300000);
    turn_left(0);
    get_no_error_infos_bool(&error, &finish);
    go_forward(0.1);
    get_no_error_infos_bool(&error, &finish);
}

int check_if_blocked(float right, float left)
{
    if (right < 0.5) {
        fprintf(stderr, "right: %f\n", right);
        turned_right();
    }
    if (left < 0.5) {
        fprintf(stderr, "left: %f\n", left);
        turned_left();
    }
    return 0;
}

int control_loop(nfs_returns_t *global)
{
    float front = 0.0;
    float left = 0.0;
    float right = 0.0;
    float dir = 0.0;
    int error = 0;
    bool finish = false;
    bool error_bool = false;

    error = get_lidar_infos(&front, &right, &left);
    if (error != 0)
        return error;
    dir = set_car_speed(front, global, &finish, &error_bool);
    if (finish == true)
        return 1;
    if (error_bool == true)
        return 84;
    error = update_control(dir, right, left);
    if (error != 0)
        return error;
    return check_if_blocked(right, left);
}
