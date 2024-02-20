/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** one by one
*/

#include "printf.h"

int my_putstr_print(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        write(1, &str[i], 1);
    }
    return 0;
}
