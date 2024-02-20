/*
** EPITECH PROJECT, 2022
** mini_printf.c
** File description:
** my_printf
*/

#include "printf.h"

int my_hex_lower_print(int x)
{
    int diviseur = 0, reste = 0;

    if (x > 15)
        big_hex(diviseur, reste, x, 87);
    display_hex(x, 87);
    return 0;
}
