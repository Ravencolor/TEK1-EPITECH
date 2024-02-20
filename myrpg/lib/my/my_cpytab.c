/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** my_cpytab.c
*/

#include "my.h"

char **my_cpytab(char **tab, int bool)
{
    if (bool < 1 || bool > 2) my_putstr("0: malloc || 1: malloc / recopier");
    char **copy = malloc(sizeof(char*) * (my_strtab(tab) + 1));
    int i = 0;

    while (tab[i]) {
        copy[i] = malloc(sizeof(char) * (my_strlen(tab[i]) + 1));
        copy[i][my_strlen(tab[i])] = '\0';
        i++;
    }
    copy[i] = NULL;
    if (bool == 2) return copy;
    i = 0; int y = 0;
    for (; tab[i] != NULL && tab[i][y] != '\0'; y++) {
        copy[i][y] = tab[i][y];
        if (tab[i][y + 1] == '\0') {
            y = -1;  i++;
        }
    }
    return copy;
}
