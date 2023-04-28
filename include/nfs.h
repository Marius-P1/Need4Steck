/*
** EPITECH PROJECT, 2023
** Need4Steck
** File description:
** Need4Steck header file
*/

#pragma once

#include "n4s_returns.h"
#include "lib.h"

// Basic Need4Stek functions
int needforstek(int argc, char **argv);
int error_handling_args(int argc, char **argv);
int display_help(void);


// Car movements functions
void go_forward(float speed);
void go_backward(float speed);


// Get current infos functions
n4s_returns_t *get_general_infos(return_type_t type);
n4s_returns_t *get_lidar_infos(void);
n4s_returns_t *get_speed_infos(void);
n4s_returns_t *get_wheels_dir_infos(void);
n4s_returns_t *get_max_speed_infos(void);
n4s_returns_t *get_min_speed_infos(void);
n4s_returns_t *get_no_error_infos(void);
float get_value(char *line);
bool check_error(char *line, n4s_returns_t *infos);
bool check_finish(char *line);
