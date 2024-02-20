/*
** EPITECH PROJECT, 2022
** my_double_print.c
** File description:
** double
*/

#include "printf.h"

int my_double_print(double a)
{
    int left = a;
    double right = (((double)a - (double)left) * (int)1000000);
    int i;

    if (right < ((double)a - (double)left) * (int)1000000)
        right++;
    my_put_nbr_print(left);
    my_putchar_print('.');
    for (i = 0; right < 100000; i++) {
        my_put_nbr_print(0);
        right *= 10;
    }
    for (; i > 0; i--)
        right /= 10;
    my_put_nbr_print(right);
    return 0;
}
