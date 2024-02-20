/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** my_putchar.c
*/

#include "sprintf.h"

void my_putchar_s(char a)
{
    write(1, &a, 1);
}
