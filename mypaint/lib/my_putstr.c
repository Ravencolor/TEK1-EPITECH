/*
** EPITECH PROJECT, 2022
** tstr
** File description:
** tstr
*/

#include "../includes/my.h"

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
}
