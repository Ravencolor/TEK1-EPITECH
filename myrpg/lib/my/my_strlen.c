/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** how number of the string
*/

#include "my.h"

int my_strlen(const char *str)
{
    int i = 0;

    if (str == NULL)
        return i;
    if (*str == '\0')
        return i;

    for (; *str; str++, i++);

    return i;
}
