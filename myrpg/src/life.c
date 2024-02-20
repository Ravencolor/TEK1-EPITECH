/*
** EPITECH PROJECT, 2022
** src/loop.o** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** life.c
*/

#include "../include/my_rpg.h"

void draw_life(elements *e)
{
    if (e->int_status_life == 0)
        sfRenderWindow_drawSprite(e->win, e->hp30, NULL);
    if (e->int_status_life == 1)
        sfRenderWindow_drawSprite(e->win, e->hp31, NULL);
    if (e->int_status_life == 2)
        sfRenderWindow_drawSprite(e->win, e->hp32, NULL);
    if (e->int_status_life == 3)
        sfRenderWindow_drawSprite(e->win, e->hp33, NULL);
    if (e->int_status_life == 4)
        sfRenderWindow_drawSprite(e->win, e->hp34, NULL);
    if (e->int_status_life == 5)
        sfRenderWindow_drawSprite(e->win, e->hp35, NULL);

    return;
}
