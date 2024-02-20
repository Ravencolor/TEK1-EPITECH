/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** my_strcmp.c
*/

#include "sprintf.h"

int my_strcmp_s(const char *s1, const char *s2)
{
    int ret = my_strlen_s(s1), i = 1;

    while (*s1++ == *s2++ && *s1 && *s2)
        i++;

    if (ret == i)
        return 0;
    if (ret < i)
        return -1;
    if (ret > i)
        return 1;
}
