/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** my_str_to_word_array.c
*/

#include "sprintf.h"

int my_bsq(char a)
{
    if (a == '\0' || a == '\n' || a == ' ' || a == '=')
        return 0;
    return 1;
}

int number_of_word(char *str)
{
    int i = 2, nb_word = 0;

    if (my_bsq(str[0]))
        nb_word++;
    if (str[1] == '\0')
        return nb_word;
    for (; str[i] != '\0'; i++)
        if (!my_bsq(str[i - 1]) && my_bsq(str[i]))
            nb_word++;
    return nb_word;
}

char **traitement_string(int nb_word, char *str, char **my_str)
{
    int i = 0;
    int y = 0;

    for (; y < nb_word; y++) {
        my_str[y] = malloc(sizeof(char) * (my_strlen_s(str) + 1));
        for (int v = 0; my_bsq(str[i]); i++, v++) {
            my_str[y][v] = str[i];
            my_str[y][v + 1] = '\0';
        }
        for (; !my_bsq(str[i]) && str[i] != '\0'; i++);
        my_str[y + 1] = NULL;
    }
    return my_str;
}

char **my_str_to_world_array_s(char *str)
{
    char **my_str = NULL;
    int nb_word = number_of_word(str);
    int y = 0, size = 0;

    my_str = malloc(sizeof(char *) * (nb_word + 1));
    my_str = traitement_string(nb_word, str, my_str);
    return my_str;
}
