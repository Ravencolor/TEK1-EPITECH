/*
** EPITECH PROJECT, 2022
** my_cat
** File description:
** my_str_to_world_array
*/

#include "my.h"

int letter(char separateur, char a)
{
    if (a == '\0' || a == separateur)
        return 0;
    return 1;
}

int number_of_word_perso(char *str, char separateur)
{
    int i = 2, nb_word = 0;

    if (letter(separateur, str[0]))
        nb_word++;
    if (str[1] == '\0')
        return nb_word;
    for (; str[i] != '\0'; i++)
        if (!letter(separateur, str[i]) && letter(separateur, str[i + 1]))
            nb_word++;
    return nb_word;
}

char **traitement_string_perso(int nb_word, char *str, char **my_str, char sep)
{
    int i = 0;
    int y = 0;

    for (; y < nb_word; y++) {
        my_str[y] = malloc(sizeof(char) * (my_strlen(str) + 1));
        for (int v = 0; letter(sep, str[i]); i++, v++) {
            my_str[y][v] = str[i];
            my_str[y][v + 1] = '\0';
            my_str[y + 1] = NULL;
        }
        for (; !letter(sep, str[i]) && str[i] != '\0'; i++);
    }
    return my_str;
}

char **my_str_to_world_array_perso(char *str, char separateur)
{
    char **my_str = NULL;
    int nb_word = number_of_word_perso(str, separateur);

    my_str = malloc(sizeof(char *) * (nb_word + 1));
    my_str = traitement_string_perso(nb_word, str, my_str, separateur);
    return my_str;
}
