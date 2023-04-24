/*
** EPITECH PROJECT, 2023
** tests
** File description:
** tests_handling_args
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "nfs.h"

Test(error_handling_args, test_handling_args, .timeout = 5)
{
    char *argv[] = {"./ai", "azerty", NULL};
    int argc = 2;

    cr_assert_eq(error_handling_args(argc, argv), 84);
}

Test(error_handling_args, test_handling_args2, .timeout = 5)
{
    char *argv[] = {"./ai", "-h\0", NULL};
    int argc = 2;

    cr_redirect_stdout();
    cr_assert_eq(error_handling_args(argc, argv), 1);
    cr_assert_stdout_eq_str("\nUSAGE\n"
    "\t./pipes.sh\n"
    "\nDESCRIPTION\n"
    "\tpipes.sh"
    "\tlaunch the pipes program and the ai\n\n");
}

Test(error_handling_args, test_handling_args3, .timeout = 5)
{
    char *argv[] = {"./ai", "454", "az", NULL};
    int argc = 3;

    cr_assert_eq(error_handling_args(argc, argv), 84);
}

Test (error_handling_args, test_handling_args4, .timeout = 5)
{
    char *argv[] = {"./ai", NULL};
    int argc = 1;

    cr_assert_eq(error_handling_args(argc, argv), 0);
}
