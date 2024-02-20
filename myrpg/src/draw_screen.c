/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** draw_screen.c
*/

#include "../include/my_rpg.h"

void draw_screen_settings2(elements *e)
{
    if (is_survol_text(e, e->petit) == 0)
        sfRenderWindow_drawText(e->win, e->petit, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_petit, NULL);
    if (is_survol_text(e, e->return_screen) == 0)
        sfRenderWindow_drawText(e->win, e->return_screen, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_return_screen, NULL);
}

void draw_screen_settings(elements *e)
{
    if (e->is_skills == 1 || e->is_screen == 0)
        return;
    if (is_survol_text(e, e->winodw) == 0)
        sfRenderWindow_drawText(e->win, e->winodw, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_window, NULL);
    if (is_survol_text(e, e->grand) == 0)
        sfRenderWindow_drawText(e->win, e->grand, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_grand, NULL);
    if (is_survol_text(e, e->fullscreen) == 0)
        sfRenderWindow_drawText(e->win, e->fullscreen, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_fullscreen, NULL);
    draw_screen_settings2(e);
}
