/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-samuel.pinault
** File description:
** my_put_nbr.c
*/

#include "../includes/my.h"

int my_put_nbr(int nb)
{
    int v;

    if (nb < 0) {
        my_putchar('-');
        nb *= (-1);
        if (nb >= 0 && nb < 10)
            my_put_nbr(nb);
    }
    if (nb >= 0 && nb < 10)
        my_putchar(nb + 48);
    if (nb >= 10) {
        v = nb % 10;
        my_put_nbr(nb / 10);
        my_putchar(v + 48);
    }
    return v;
}
