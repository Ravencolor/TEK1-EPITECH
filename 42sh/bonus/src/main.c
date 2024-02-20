/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** main of 42sh
*/

#include "sh42.h"

int main(int ac , char **av, char **env)
{
    int t = 0;
    char **my_env = env;

    if (av[1] != NULL && av[1][0] == '-' && av[1][1] == 't' &&
    av[1][2] == '\0')
        t = 1;
    else if (ac != 1)
        return 84;
    shell(my_env, t);
    my_free_array(my_env);
    return 0;
}
