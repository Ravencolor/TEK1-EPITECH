/*
** EPITECH PROJECT, 2022
** rush.c
** File description:
** rush.c
*/

#include <unistd.h>
#include "include/my.h"

void rush(int ac, char **av, int length, int a)
{
    int i = 0;
    int j = 0;
    int strl = my_strlen(av[1]);
    char *str = av[1];
    char letter = av[a][0];
    char up = 0;

    for (i; i < strl; i++) {
        if (letter > '@' && letter < '[')
            up = letter + ' ';
        if (letter > '`' && letter < '{')
            up = letter - ' ';
        if (str[i] == letter || str[i] == up)
            j++;
    }
    my_printer(&letter, &j, j, length);
}
