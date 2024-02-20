/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** my_strtab.c
*/

#include "my.h"

int my_strtab(char **tab)
{
    int i = 0;

    for (; *tab; tab++, i++);

    return i;
}
