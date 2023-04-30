/*
** EPITECH PROJECT, 2023
** Need4Steck
** File description:
** Need4Steck header file
*/

#pragma once

#include "nfs_returns.h"
#include "lib.h"

// Basic Need4Stek functions
int needforstek(int argc, char **argv);
int error_handling_args(int argc, char **argv);
int display_help(void);


// Control loop functions
float get_speed(float distance);
float get_dir(float distance);
int control_loop(nfs_returns_t *global);
float set_car_speed(float distance, nfs_returns_t *global,
bool *finish, bool *error);


// Car movements functions
void go_forward(float speed);
void go_backward(float speed);
void turn_right(float angle);
void turn_left(float angle);


// Get current infos functions
int get_lidar_infos(float *front, float *right, float *left);
void get_no_error_infos(nfs_returns_t *infos);
float get_value(char *line);
bool check_error(char *line);
bool check_finish(char *line);
void get_no_error_infos_bool(bool *error, bool *finish);
