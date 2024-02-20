/*
** EPITECH PROJECT, 2022
** minishell
** File description:
** main
*/

#include "../include/my_printf.h"

int main(int ac, char **av, char **ev)
{
    char *mem;
    int	pd = 0;
    ac = ac;
    mem = malloc(sizeof(char)* 4096);
    mem = my_mem(mem);
    while (1) {
        mem = my_mem(mem);
        my_putstr("$>");
        signal(SIGINT, ctrlc);
        read(0, mem, 4096);
        sls(mem, pd, av, ev);
    }
    return (0);
}
