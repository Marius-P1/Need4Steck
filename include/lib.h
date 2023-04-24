/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lib.h
*/

#pragma once

#include <stdbool.h>

int my_atoi(char *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strcmp(char *s1, char *s2);
int my_strlen(const char *str);
int my_strncmp(char *s1, char *s2, int n);
char* my_strcat(char* dest, const char* src);
char* my_strncat(char* dest, const char* src, int n);
char* my_strkcat(char* dest, const char* src);
char *my_strcpy(char *str);
char *my_strkcpy(char *str);
char **my_str_to_word_array(char *str, char separator);
char **my_str_to_word_array2(char *str);
int my_arraylen(char **array);
char **my_arraycpy(char **array);
bool my_char_isalphanum(char const c);
bool my_str_isalphanum(char const *str);
char *my_cleanstr(char *str);
