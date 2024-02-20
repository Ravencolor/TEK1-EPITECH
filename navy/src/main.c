/*
** EPITECH PROJECT, 2022
** my_navy
** File description:
** main
*/

#include "../include/my.h"

const int	win = 10;

int main(int ac, char **av)
{
    int fd;
    char buffer[1];

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        fd = open("./texte/help.txt", O_RDONLY);
        while (read(fd, buffer, 1) != 0)
            write(1, buffer, 1);
        return 0;
    }
    if (ac == 1 || ac > 3) {
        my_putstr("navy: Invalid options, try -h for see help\n");
        return 84;
    }
    navy(ac, av, -1);
    if (win == 1)
        my_putstr("Enemy won\n");
    else if (win == 0)
        my_putstr("I won\n");
    return (win);
}
