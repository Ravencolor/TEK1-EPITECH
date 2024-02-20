/*
** EPITECH PROJECT, 2022
** my_strcmp.c
** File description:
** strcmp
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    if (s1 == NULL | s2 == NULL)
        return -2;

    while (*s1 && *s2 && *s1 == *s2) {
        s1++; s2++;
    }

    if (*s1 == '\0' && *s2 == '\0')
        return 0;
    return -1;
}
