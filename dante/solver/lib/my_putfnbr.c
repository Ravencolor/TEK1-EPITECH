/*
** EPITECH PROJECT, 2022
** my_putfnbr
** File description:
** function returning str from float
*/

#include "../includes/my.h"

char *zero_add(int num)
{
    char *zero;

    for (int i = 0; i < num; i++)
        zero[i] = '0';
    zero[num] = '\0';
    return zero;
}

char *my_putfnbr(double num, int dec)
{
    char *number_int, *number_dec, *final_return, *zeros;
    int size;

    number_int = my_put_nbr((int)num);
    num -= (int)num;
    num *= 10;
    number_dec = my_put_nbr((int)num);
    size = my_strlen(number_int) + my_strlen(number_dec) + 2;
    if (my_strlen(number_dec) < dec) {
        size += dec - my_strlen(number_dec);
        zeros = zero_add(dec - my_strlen(number_dec));
    }
    final_return = malloc(sizeof(char) * size);
    my_strcpy(final_return, number_int);
    my_strcat(final_return, ".");
    if (my_strlen(number_dec) < dec)
        my_strcat(final_return, zeros);
    my_strcat(final_return, number_dec);
    return final_return;
}
