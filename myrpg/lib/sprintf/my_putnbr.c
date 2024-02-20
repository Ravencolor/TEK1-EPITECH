/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** my_putnbr.c
*/

#include "sprintf.h"

void my_putnbr_s(int nb)
{
    if (nb < 0) {
        my_putchar_s('-');
        nb = nb * (-1);
    }
    if (nb > 9) {
        my_putnbr_s(nb / 10);
        my_putnbr_s(nb % 10);
    } else {
        my_putchar_s(nb + 48);
    }
}
