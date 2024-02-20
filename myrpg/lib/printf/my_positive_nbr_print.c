/*
** EPITECH PROJECT, 2022
** my_put_positive_print.c
** File description:
** positive number
*/

#include "printf.h"

int my_positive_nbr_print(int a)
{
    if (a > 0) {
        my_putchar_print('+');
        my_put_nbr_print(a);
    } else {
        my_put_nbr_print(a);
    }
    return 0;
}
