/*
** EPITECH PROJECT, 2023
** B-PSU-200-LIL-2-1-minishell1-enzo.boron
** File description:
** my_free
*/

#include "my.h"

char **my_free(char **tab)
{
    int i = 0;

    for (; tab[i] != NULL; i++)
        free(tab[i]);
    return tab;
}
