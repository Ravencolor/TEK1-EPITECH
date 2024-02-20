/*
** EPITECH PROJECT, 2022
** push_swap
** File description:
** pustr
*/

#include "../include/my.h"

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
}
