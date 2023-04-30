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
    float speed;
    float dir;
    float old_speed;
    float old_dir;
} nfs_returns_t;
