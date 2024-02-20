/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "includes/my.h"

int main (int ac, char **av)
{
sfRenderWindow *w; sfEvent event;
const char *desc = "MyPaint\n";

    if (ac == 2 && my_strcm(av[1], "-h") == 0)
        my_putstr(desc);
    else {
        window(w, event);
    }
    return 0;
}
