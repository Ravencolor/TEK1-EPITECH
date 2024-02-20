/*
** EPITECH PROJECT, 2022
** my_str_to_word_array_mod
** File description:
** dsk
*/

#include "libmy.h"

int my_count_wordss(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n')
            continue;
        count++;
        for (; str[i] != ' ' && str[i] != '\n' && str[i] != '\0'; i++);
    }
    return (count);
}

int my_word_lens(char const *str)
{
    int len = 0;

    for (;str[len] != '\n' && str[len] != '\0'; len++);
    return (len);
}

char **my_str_to_word_array_mod(char const *str)
{
    char **array = malloc(sizeof(char *) * (my_count_wordss(str) + 1));
    int i = 0;
    int j = 0;
    int k = 0;

    for (; str[i] != '\0'; i++) {
        array[j] = malloc(sizeof(char) * (my_word_lens(&str[i]) + 1));
        for (k = 0;str[i] != '\n' && str[i] != '\0'; k++) {
            array[j][k] = str[i];
            i++;
        }
        array[j][k] = '\0';
        j++;
    }
    array[j] = NULL;
    return (array);
}
