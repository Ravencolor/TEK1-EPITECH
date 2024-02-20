/*
** EPITECH PROJECT, 2022
** task1
** File description:
** 0
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
