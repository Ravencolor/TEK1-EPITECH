/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_printfflags
*/

#include "../include/my.h"

int octal(int decnum)
{
    int decimal = decnum;
    int temp1, temp2;

    temp1 = decimal / 8;
    temp2 = decimal % 8;
    my_put_nbr(temp1);
    my_put_nbr(temp2);
}
