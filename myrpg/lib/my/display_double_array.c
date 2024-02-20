/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** display_double_array.c
*/

#include "my.h"

void display_double_array(char **tab)
{
    int y = 0;

    while (tab[y]) {
        my_putstr(tab[y]);
        my_putchar('\n');
        y++;
    }
    return;
}
