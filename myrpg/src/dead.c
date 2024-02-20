/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** dead.c
*/

#include "../include/my_rpg.h"

// if (is_click_text(e, e->mess_dead) == 1)
// jouer le sond bouuuu/scrimer
void click_dead_button(elements *e)
{
    if (e->int_status_life != 0)
        return;

    if (is_click_text(e, e->check) == 1) {
        e->int_status_life = 3;
    }
    if (is_click_text(e, e->quit_dead) == 1) {
        e->int_status_life = 3;
        e->status = 0;
    }

    return;
}

void draw_dead(elements *e)
{
    click_dead_button(e);
    if (e->int_status_life != 0)
        return;
    sfRenderWindow_drawText(e->win, e->mess_dead, NULL);
    sfRenderWindow_drawText(e->win, e->check, NULL);
    sfRenderWindow_drawText(e->win, e->quit_dead, NULL);
}
