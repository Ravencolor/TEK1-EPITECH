/*
** EPITECH PROJECT, 2022
** tstr
** File description:
** tstr
*/

#include "../include/my_include.h"

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
}
