/*
** EPITECH PROJECT, 2023
** my_strncmp.c
** File description:
** compare x bits in string
*/

#include "my.h"

int my_strncmp(const char *s1, const char *env, int x)
{
    int i = 0;
    for (; i < x && s1[i] == env[i]; i++) {
        if ((i + 1) == x && env[i + 1] == '=')
            return 0;
    }
    return -1;
}
