/*
** EPITECH PROJECT, 2022
** minishell
** File description:
** main
*/

#include "../include/my_printf.h"

void sls(char *mem, int pd, char **av, char **ev)
{
    if (my_strcmp(mem, "ls\n") == 0) {
        if (fork() == 0) {
            execve("/bin/ls", av, ev);
        } else
            wait (0);
    } else
        pwd(mem, pd, av, ev);
}

void	pwd(char *mem, int pd, char **av, char **ev)
{
    if (my_strcmp(mem, "pwd\n") == 0) {
        if ((pd = fork()) == -1)
            error("ERREUR");
        if (pd == 0) {
            execve("/bin/pwd", av, ev);
        } else
            wait(0);
    } else
        clear(mem, pd, av, ev);
}

void clear(char *mem, int pd, char **av, char **ev)
{
    if (my_strcmp(mem, "clear\n") == 0) {
        if ((pd = fork()) == -1)
            error("ERREUR");
        if (pd == 0) {
        execve("/usr/bin/clear", av, ev);
        } else
            wait(0);
    } else
        env(mem, pd, av, ev);
}

void env(char *mem, int pd, char **av, char **ev)
{
    if (my_strcmp(mem, "env\n") == 0) {
        if ((pd = fork()) == -1)
            error("ERREUR");
        if (pd == 0) {
            execve("/usr/bin/env", av, ev);
        } else
            wait(0);
    } else
        ecd(mem);
}
