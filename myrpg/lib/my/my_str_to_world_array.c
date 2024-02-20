/*
** EPITECH PROJECT, 2022
** my_cat
** File description:
** my_str_to_world_array
*/

#include "my.h"

int my_bsq(char a)
{
    if (a == '\0' || a == '\n' || a == ' ' || a == '=' || a == '|')
        return 0;
    else
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
        if (!my_bsq(str[i]) && my_bsq(str[i + 1]))
            nb_word++;
    return nb_word;
}

char **traitement_string(int nb_word, char *str, char **my_str)
{
    int i = 0;
    int y = 0;

    for (; y < nb_word; y++) {
        my_str[y] = malloc(sizeof(char) * (my_strlen(str) + 1));
        for (int v = 0; my_bsq(str[i]); i++, v++) {
            my_str[y][v] = str[i];
            my_str[y][v + 1] = '\0';
            my_str[y + 1] = NULL;
        }
        for (; !my_bsq(str[i]) && str[i] != '\0'; i++);
    }
    return my_str;
}

char **my_str_to_world_array(char *str)
{
    char **my_str = NULL;
    if (*str == '\0' || str == NULL)
        return my_str;
    int nb_word = number_of_word(str);

    my_str = malloc(sizeof(char *) * (nb_word + 1));
    my_str = traitement_string(nb_word, str, my_str);
    return my_str;
}
