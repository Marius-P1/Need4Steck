/*
** EPITECH PROJECT, 2023
** test_car_movements.c
** File description:
** tests all the functions that are linked to the car movements function
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "nfs.h"

Test(turn_left, test_turn_left, .timeout = 5)
{
    cr_redirect_stdout();
    turn_left(0.5);
    cr_assert_stdout_eq_str("WHEELS_DIR:-0.5\n");
}

Test(turn_left, test_turn_left_negative_value, .timeout = 5)
{
    cr_redirect_stdout();
    turn_left(-0.5);
    cr_assert_stdout_eq_str("WHEELS_DIR:-0.0\n");
}

Test(turn_left, test_turn_left_value_greater_than_1, .timeout = 5)
{
    cr_redirect_stdout();
    turn_left(1.5);
    cr_assert_stdout_eq_str("WHEELS_DIR:-1.0\n");
}

Test(turn_right, test_turn_right, .timeout = 5)
{
    cr_redirect_stdout();
    turn_right(0.5);
    cr_assert_stdout_eq_str("WHEELS_DIR:0.5\n");
}

Test(turn_right, test_turn_right_negative_value, .timeout = 5)
{
    cr_redirect_stdout();
    turn_right(-0.5);
    cr_assert_stdout_eq_str("WHEELS_DIR:0.0\n");
}

Test(turn_right, test_turn_right_value_greater_than_1, .timeout = 5)
{
    cr_redirect_stdout();
    turn_right(1.5);
    cr_assert_stdout_eq_str("WHEELS_DIR:1.0\n");
}

Test(car_forward, test_car_forward, .timeout = 5)
{
    cr_redirect_stdout();
    go_forward(0.5);
    cr_assert_stdout_eq_str("CAR_FORWARD:0.5\n");
}

Test(car_forward, test_car_forward_negative_value, .timeout = 5)
{
    cr_redirect_stdout();
    go_forward(-0.5);
    cr_assert_stdout_eq_str("CAR_FORWARD:0.0\n");
}

Test(car_forward, test_car_forward_value_greater_than_1, .timeout = 5)
{
    cr_redirect_stdout();
    go_forward(1.5);
    cr_assert_stdout_eq_str("CAR_FORWARD:1.0\n");
}

Test(car_backward, test_car_backward, .timeout = 5)
{
    cr_redirect_stdout();
    go_backward(0.5);
    cr_assert_stdout_eq_str("CAR_BACKWARDS:0.5\n");
}

Test(car_backward, test_car_backward_negative_value, .timeout = 5)
{
    cr_redirect_stdout();
    go_backward(-0.5);
    cr_assert_stdout_eq_str("CAR_BACKWARDS:0.0\n");
}

Test(car_backward, test_car_backward_value_greater_than_1, .timeout = 5)
{
    cr_redirect_stdout();
    go_backward(1.5);
    cr_assert_stdout_eq_str("CAR_BACKWARDS:1.0\n");
}
