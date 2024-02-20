/*
** EPITECH PROJECT, 2022
** my_binary_print.c
** File description:
** conv_binary
*/

#include "printf.h"

int my_binary_print(int x)
{
    int diviseur;
    int reste;
    int save[100];
    int i;

    reste = x % 2;
    diviseur = x / 2;
    save[0] = reste;
    for (i = 1; diviseur != 0; i++) {
        reste = (diviseur % 2);
        diviseur = (diviseur / 2);
        save[i] = reste;
    }
    for (int a = (i - 1); a >= 0; a--)
        my_put_nbr_print(save[a]);
    return 0;
}
