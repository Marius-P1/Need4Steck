/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_str_to_word_array
*/

#include "lib.h"

#include <stdlib.h>

int get_nb_letter(char *str, int *j, char separator)
{
    int nb_letter = 0;

    for (; str[(*j)] == separator && str[(*j)] != '\0'; (*j)++);
    for (; str[(*j)] != '\0'; (*j)++, nb_letter++) {
        if (str[(*j)] == separator)
            return nb_letter;
    }
    return nb_letter;
}

char **allocate_memory(int nb_words, char *str, char separator)
{
    char **tab = malloc(sizeof(char *) * (nb_words + 1));
    int j = 0;
    int nb_letter = 0;

    for (int i = 0; i < nb_words; i++) {
        nb_letter = get_nb_letter(str, &j, separator);
        tab[i] = malloc(sizeof(char) * (nb_letter + 1));
        tab[i][nb_letter] = '\0';
    }
    tab[nb_words] = NULL;
    return (tab);
}

int get_nb_words(char *str, char separator)
{
    int nb_words = 0;
    int i = 0;

    for (; str[i] == separator && str[i + 1] != '\0'; i++);
    for (; str[i + 1] != '\0'; i++)
        if (str[i] == separator && str[i + 1] != separator)
            nb_words++;
    return (nb_words + 1);
}

char **my_str_to_word_array(char *str, char separator)
{
    int nb_words = get_nb_words(str, separator);
    char **tab = allocate_memory(nb_words, str, separator);
    int i = 0;
    for (; str[i] == separator && str[i] != '\0'; i++);
    for (int j = 0, k = 0; str[i] != '\0'; i++) {
        if (str[i] == separator && str[i + 1] != separator) {
            j++;
            k = 0;
        }
        if (str[i] != separator) {
            tab[j][k] = str[i];
            k++;
        }
    }
    return tab;
}
