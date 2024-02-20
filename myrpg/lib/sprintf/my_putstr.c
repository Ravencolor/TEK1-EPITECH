/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** my_putstr.c
*/

#include "sprintf.h"

void my_putstr_s(char *str)
{
    int i = 0;

    while (str[i]) {
        write(1, &str[i], 1);
        i++;
    }
}
