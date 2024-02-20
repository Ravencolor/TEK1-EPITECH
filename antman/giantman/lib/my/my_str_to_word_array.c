/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** dsk
*/

#include "libmy.h"

int my_count_words(char const *str, char sep)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (str[i] == sep)
            count++;
        i++;
    }
    return (count + 1);
}

int my_count_letters(char const *str, char sep)
{
    int i = 0;

    while (str[i] != '\0' && str[i] != sep)
        i++;
    return (i);
}

char **my_str_to_word_array(char const *str)
{
    char **tab = malloc(sizeof(char *) * (my_count_words(str, ' ') + 1));
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        tab[j] = malloc(sizeof(char) * (my_count_letters(&str[i], ' ') + 1));
        for (; str[i] != '\0' && str[i] != ' '; i++) {
            tab[j][k] = str[i];
            k++;
        }
        tab[j][k] = '\0';
        k = 0;
        j++;
        if (str[i] != '\0')
            i++;
    }
    tab[j] = NULL;
    return (tab);
}
