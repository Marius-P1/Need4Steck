/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_str_to_word_array
*/

#include "lib.h"

#include <stdlib.h>

int get_nb_letter2(char *str, int *j)
{
    int nb_letter = 0;

    for (; (str[(*j)] == ' ' || str[(*j)] == '\t') &&
    str[(*j)] != '\0'; (*j)++);
    for (; str[(*j)] != '\0'; (*j)++, nb_letter++) {
        if ((str[(*j)] == ' ' || str[(*j)] == '\t'))
            return nb_letter;
    }
    return nb_letter;
}

char **allocate_memory2(int nb_words, char *str)
{
    char **tab = malloc(sizeof(char *) * (nb_words + 1));
    int j = 0;
    int nb_letter = 0;

    for (int i = 0; i < nb_words; i++) {
        nb_letter = get_nb_letter2(str, &j);
        tab[i] = malloc(sizeof(char) * (nb_letter + 1));
        tab[i][nb_letter] = '\0';
    }
    tab[nb_words] = NULL;
    return (tab);
}

int get_nb_words2(char *str)
{
    int nb_words = 0;
    int i = 0;

    for (; (str[i] == ' ' || str[i] == '\t') && str[i + 1] != '\0'; i++);
    for (; str[i + 1] != '\0'; i++)
        if ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] != ' '
        && str[i + 1] != '\t'))
            nb_words++;
    return (nb_words + 1);
}

char **my_str_to_word_array2(char *str)
{
    int nb_words = get_nb_words2(str);
    char **tab = allocate_memory2(nb_words, str);
    int i = 0;
    for (; (str[i] == ' ' || str[i] == '\t') && str[i] != '\0'; i++);
    for (int j = 0, k = 0; str[i] != '\0'; i++) {
        if ((str[i] == ' ' || str[i] == '\t') &&
        (str[i + 1] != ' ' && str[i + 1] != '\t')) {
            j++;
            k = 0;
        }
        if (str[i] != ' ' && str[i] != '\t') {
            tab[j][k] = str[i];
            k++;
        }
    }
    return tab;
}
