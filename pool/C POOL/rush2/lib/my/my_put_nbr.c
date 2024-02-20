/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/

#include <unistd.h>
#include "../../include/my.h"

int my_put_nbr(int nb)
{
    int i = (nb < 0) ? -nb : nb;

    if (nb < 0)
        my_putchar('-');
    if (i >= 10) {
        my_put_nbr(i / 10);
        my_put_nbr(i % 10);
    } else
        my_putchar(i + '0');
    return (0);
}
