/*
** EPITECH PROJECT, 2022
** tools.c
** File description:
** tools.c
*/

#include <unistd.h>
#include "include/my.h"

int my_float(int nb)
{
    my_put_nbr(nb / 100);
    write(1, ".", 1);
    my_put_nbr(nb / 10 % 10);
    my_put_nbr(nb % 10);
    return (0);
}

void my_printer(char *letter, int *value, int a, int lentgh)
{
    int per;

    per = a * 10000 / lentgh;
    write(1, letter, 1);
    write(1, ":", 1);
    my_put_nbr(*value);
    write(1, " (", 2);
    my_float(per);
    write(1, "%)\n", 3);
}
