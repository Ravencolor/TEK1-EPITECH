/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** status_game_evt.c
*/

#include "../include/my_rpg.h"

short event_click_box(elements *e, sfText *text)
{
    if (is_click_text(e, text) == 1)
        return 1;
    if (is_click_text(e, e->txt_box) == 1)
        return 1;
    if (is_click_sprite(e, e->box) == 1)
        return 1;
    if (is_click_sprite(e, e->wallpaper) == 1)
        return 1;
    if (is_click_sprite(e, e->logo_menu) == 1)
        return 1;
    if (e->event.type == sfEvtKeyPressed)
        return 1;

    return 0;
}

void draw_message_begin(elements *e)
{
    if (e->status_game == 0 ){
        e->status_game++;
        return;
    }
    if (e->status_game == 1 ){
        e->status_game++;
        return;
    }
    if (e->status_game == 2 ){
        e->status_game++;
        return;
    }
    if (e->status_game == 3 ){
        e->status_game++;
    }

    return;
}

void draw_into(elements *e)
{
    if (e->status_game == 4 ){
        e->status_game++;
        return;
    }
    if (e->status_game == 5 ){
        e->status_game++;
        return;
    }
    if (e->status_game == 6 ){
        e->status_game++;
        e->display_inventary = 0;
        return;
    }

    return;
}
