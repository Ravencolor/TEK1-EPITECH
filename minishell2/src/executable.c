/*
** EPITECH PROJECT, 2022
** minishell
** File description:
** main
*/

#include "../include/my_printf.h"


char *my_mem(char *str)
{
    int i = -1;
    while (i <= 4096) {
        str[i] = 0;
        i++;
    }
    return (str);
}

void ctrlc(void)
{
    my_putstr("\n");
}

void ctrld(void)
{
    exit (0);
}

void end(char *mem)
{
    if (my_strcmp(mem, "exit\n") == 0) {
        exit (0);
    } else
        pent(mem);
}

void pent(char *mem)
{
    if (my_strcmp(mem, "\n") == 0) {
    } else
        my_putstr("Command not found\n");
}
