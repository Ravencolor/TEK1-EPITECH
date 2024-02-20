/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** putstr
*/

#include "../include/my_printf.h"

void my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
}
