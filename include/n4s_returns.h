/*
** EPITECH PROJECT, 2023
** n4s_returns.h
** File description:
** n4s_returns
*/

#pragma once

#include <stdbool.h>

typedef enum return_type_e {
    LIDAR,
    SPEED,
    WHEELS_DIR,
    MAX_SPEED,
    MIN_SPEED,
    TIME,
    NO_ERROR,
    ERROR
} return_type_t;

typedef struct n4s_returns_s {
    return_type_t type;
    bool cp_cleared;
    float data;
    float *lidar;
    bool error;
} n4s_returns_t;
