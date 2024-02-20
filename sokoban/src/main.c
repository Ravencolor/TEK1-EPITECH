/*
** EPITECH PROJECT, 2022
** all projetc
** File description:
** my_put
*/

#include "../includes/my.h"

int main(int ac, char **av, char **env)
{
    const char *description = "USAGE:\n     ./my_sokoban map\nDESCRIPTION:\n"
    "        map file representing the warehouse map, containing '#' for walls,"
    "\n        'P' for the player, 'X' for boxes and 'O' for storage locations."
    "\n";

    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        my_putstr(description);
    if (ac != 2)
        return 84;
    if (ac == 2 && my_strcmp(av[1], "map") == 0) {
        initscr();
        refresh();
        move(LINES / 2, COLS / 2 - (my_strlen(av[1]) / 2));
        printw ("map");
        curs_set(0);
        refresh();
        getch();
        endwin();
    }
    return 0;
}
