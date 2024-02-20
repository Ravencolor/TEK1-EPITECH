/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** my_strdup.c
*/

#include "sprintf.h"

char *my_strdup_s(const char *s)
{
    char *str = malloc(sizeof(char) * (my_strlen_s(s) + 1));
    int i = 0;

    while (s[i]) {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return str;
}
