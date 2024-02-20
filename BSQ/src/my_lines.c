/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** my_lines for the number of lines
*/

#include "../include/bsq.h"

int my_lines(char *buffer)
{
    int nb = 0;

    for (int i = 0; buffer[i] != '\n'; i++)
        if (buffer[i] >= '0' && buffer[i] <= '9') {
            nb = nb * 10;
            nb = nb + (buffer[i] - '0');
        }
    return (nb);
}
