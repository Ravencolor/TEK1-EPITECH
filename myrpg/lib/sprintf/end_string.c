/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** end_string.c
*/

#include "sprintf.h"

int end_string(char *str)
{
    if (str == NULL || *str == '\0') {
        return 0;
    }
    int i = 0;

    while (str[i])
        i++;
    return i;
}
