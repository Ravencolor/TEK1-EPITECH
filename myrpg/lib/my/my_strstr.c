/*
** EPITECH PROJECT, 2022
** my_strstr.c
** File description:
** strstr
*/

#include "my.h"

char *my_strstr(char *str ,char const *to_find)
{
    int i = 0;
    int a = 0;
    int size = my_strlen(str);
    char *s = malloc(sizeof(char) * 3);

    for (; str[i] != to_find[0]; i++) {
        s = my_strcat(str, s);
    if (my_strcmp(to_find, s) == 0)
        return &str[i];
    }
}
