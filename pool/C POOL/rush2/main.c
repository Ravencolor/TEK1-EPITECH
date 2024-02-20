/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include <unistd.h>
#include "include/my.h"

int main(int ac, char **av)
{
    int i = 2;
    int j = 2;
    int k;

    if (ac < 3)
        return (84);
    while (i < ac) {
        if (av[i][0] < 'A' || (av[i][0] > 'Z'
            && av[i][0] < 'a') || av[i][0] > 'z')
            return (84);
        if (av[i][1] != '\0')
            return (84);
        i++;
    }
    while (j < ac) {
        k = my_str_isalpha(av[1]);
        rush(ac, av, k, j);
        j++;
    }
}
