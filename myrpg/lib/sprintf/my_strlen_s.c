/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** my_strlen.c
*/

#include "sprintf.h"

int my_strlen_s(const char *str)
{
    int ret = 0;

    while (*str++)
        ret++;

    return ret;
}
