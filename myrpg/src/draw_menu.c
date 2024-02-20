/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** draw_menu.c
*/

#include "../include/my_rpg.h"

void draw_menu2(elements *e)
{
    if (is_survol_text(e, e->settings) == 0)
        sfRenderWindow_drawText(e->win, e->settings, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_settings, NULL);
    if (is_survol_text(e, e->credit) == 0)
        sfRenderWindow_drawText(e->win, e->credit, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_credit, NULL);
    if (is_survol_text(e, e->quit) == 0)
        sfRenderWindow_drawText(e->win, e->quit, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_quit, NULL);
}

void draw_menu(elements *e)
{
    if (e->status != 0)
        return;
    sfRenderWindow_drawSprite(e->win, e->wallpaper, NULL);
    sfRenderWindow_drawSprite(e->win, e->logo_menu, NULL);
    if (is_survol_text(e, e->play) == 0)
        sfRenderWindow_drawText(e->win, e->play, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_play, NULL);
    if (is_survol_text(e, e->replay) == 0)
        sfRenderWindow_drawText(e->win, e->replay, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_replay, NULL);
    draw_menu2(e);
}

void menu_is_click(elements *e)
{
    if (e->status != 0)
        return;
    if (is_click_text(e, e->play) == 1)
        e->status = 3;
    if (is_click_text(e, e->settings) == 1)
        e->status = 1;
    if (is_click_text(e, e->credit) == 1)
        e->status = 2;
    if (is_click_text(e, e->quit) == 1) {
        sfRenderWindow_close(e->win);
    }
}
