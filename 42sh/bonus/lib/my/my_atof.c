/*
** EPITECH PROJECT, 2023
** my_atof
** File description:
** fonction who convert a string into a float
*/

#include "libmy.h"

float my_atof(char *str)
{
    float nb;
    int i;
    int idx;

    i = 0;
    nb = 0;
    while (str[i] != '.' && str[i] != 0)
        i += 1;
    idx = i;
    i -= 1;
    while (i >= 0) {
        nb += (str[i] - 48) * my_pow(10, idx - i - 1);
        i -= 1;
    }
    i = idx + 1;
    while (str[i] != 0) {
        nb += (str[i] - 48) * my_pow(10, idx - i);
        i += 1;
    }
    return (nb);
}
