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


// Car movements functions
void go_forward(float speed);
void go_backward(float speed);


// Get current infos functions
void get_general_infos(return_type_t type, nfs_returns_t *infos);
void get_lidar_infos(nfs_returns_t *infos);
void get_speed_infos(nfs_returns_t *infos);
void get_wheels_dir_infos(nfs_returns_t *infos);
void get_max_speed_infos(nfs_returns_t *infos);
void get_min_speed_infos(nfs_returns_t *infos);
void get_no_error_infos(nfs_returns_t *infos);
float get_value(char *line);
bool check_error(char *line, nfs_returns_t *infos);
bool check_finish(char *line);
