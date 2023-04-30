/*
** EPITECH PROJECT, 2023
** nfs_returns.h
** File description:
** nfs_returns
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

typedef struct nfs_returns_s {
    return_type_t type;
    bool cp_cleared;
    float data;
    float *lidar;
    bool error;
    bool finish;
} nfs_returns_t;
