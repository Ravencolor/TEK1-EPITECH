/*
** EPITECH PROJECT, 2022
** my_navy
** File description:
** fonction
*/

#include "../include/my.h"

extern int	win;

int	navy(int ac, char **av, int i)
{
    map();
}

char **map(void)
{
    char **tab;
    int	fd;
    int i = 0;
    char buf [180];

    tab = malloc(sizeof(char *) * 10);
    fd = open("./texte/map.txt", O_RDONLY);
    if (read(fd, buf, 180) != NULL) {
        write(fd, buf, 180);
    }
    tab[i] = 0;
    return (tab);
}
