/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** my_strncmp.c
*/

#include "sprintf.h"

int my_strncmp_s(const char *s1, const char *s2, int size)
{
    int ret = my_strlen_s(s1), i = 0;

    while (*s1++ == *s2++ && *s1 && *s2 && i < size)
        i++;

    if (i == size)
        return 0;
    if (ret < i)
        return -1;
    if (ret > i)
        return 1;
}
