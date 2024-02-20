/*
** EPITECH PROJECT, 2022
** minishell
** File description:
** main
*/

#include "../include/my_printf.h"

int	error(char *str)
{
    write(2, str, my_strlen(str));
    exit (0);
}
