/*
** EPITECH PROJECT, 2023
** xp
** File description:
** xp
*/

#include "../include/my_rpg.h"

void draw_xp(elements *e)
{
    if (e->int_status_xp == 0)
        sfRenderWindow_drawSprite(e->win, e->xp30, NULL);
    if (e->int_status_xp == 1)
        sfRenderWindow_drawSprite(e->win, e->xp31, NULL);
    if (e->int_status_xp == 2)
        sfRenderWindow_drawSprite(e->win, e->xp32, NULL);
    if (e->int_status_xp == 3)
        sfRenderWindow_drawSprite(e->win, e->xp33, NULL);

    return;
}
