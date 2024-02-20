/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-enzo.boron
** File description:
** my_hex_upper_print
*/

#include "printf.h"

int puissance(long int x, int nb, int base)
{
    while ((x * base) <= nb)
        x = x * base;
    return x;
}

int display_hex(int nb, int plus)
{
    if (nb > 9)
        my_putchar_print(nb + plus);
    if (nb < 10)
        my_put_nbr_print(nb);
    return 0;
}

int big_hex(int d, int r, int x, int p)
{
    int i = 1;
    int save[1000];

    d = puissance(16, x, 16);
    r = x % d;
    save[0] = diviser(x, d);
    while (r > 15) {
        x = r;
        d = puissance(16, x, 16);
        r = x % d;
        save[i] = diviser(x, d);
        i++;
    }
    save[i] = r;
    for (int c = 0; c <= i; c++)
        display_hex(save[c], p);
    if (x < 16)
        display_hex(x, p);
    return i;
}

int my_hex_upper_print(int x)
{
    int diviseur = x, reste = x;

    if (x > 15)
        big_hex(diviseur, reste, x, 55);
    display_hex(x, 55);
    return 0;
}
