/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** putchar
*/

#include "../include/my_printf.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
