/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** one by one
*/

#include "my.h"

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
}
