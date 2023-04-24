/*
** EPITECH PROJECT, 2023
** tests
** File description:
** test_display_help
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "nfs.h"

Test(display_help, test_display_help, .timeout = 5)
{
    cr_redirect_stdout();
    display_help();
    cr_assert_stdout_eq_str("\nUSAGE\n"
    "\t./pipes.sh\n"
    "\nDESCRIPTION\n"
    "\tpipes.sh"
    "\tlaunch the pipes program and the ai\n\n");
}
