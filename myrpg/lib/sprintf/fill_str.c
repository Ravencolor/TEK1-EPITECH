/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** fill_str.c
*/

#include "sprintf.h"

void fill_str(char *str, size_t size)
{
    int i = 0;
    for (;i < size; i++) {
        str[i] = 'a';
    }

    for (i = 0; i < size; i++);
}
