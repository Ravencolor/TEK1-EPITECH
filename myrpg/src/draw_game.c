/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** draw_game.c
*/

#include "../include/my_rpg.h"

void draw_in_map(elements *e)
{
    if (e->status_epee == 1) {
        draw_items(e, e->weapon_sword);
    } else if (e->status_epee == 0) {
        sfRenderWindow_drawSprite(e->win, e->weapon_sword, NULL);
    }

    move_pnj(e);
    set_enemy(e);

    e->rect_bwn_pp = sfRectangleShape_create();
    sfRectangleShape_setSize(e->rect_bwn_pp, (sfVector2f){70, 80});
    sfRectangleShape_setPosition(e->rect_bwn_pp,
    (sfVector2f){(1920 / 2) - 100, (1080 / 2) - 150});
    sfRectangleShape_setFillColor(e->rect_bwn_pp, sfWhite);
    walk_items(e);
    sfRectangleShape_destroy(e->rect_bwn_pp);
}

void draw_game(elements *e)
{
    e->old_status = 3;
    sfRenderWindow_drawSprite(e->win, e->maps, NULL);
    sfRenderWindow_drawSprite(e->win, e->logo_menu, NULL);
    draw_xp(e);
    draw_life(e);
    draw_dead(e);
    draw_inventary(e);
    draw_bow(e);
    draw_intro(e);
    draw_pp(e);
    draw_in_map(e);
    draw_quest(e);

    return;
}

void click_game(elements *e)
{
    bloc_settings(e);
    draw_message_begin(e);
    draw_into(e);
    moove_pp(e);
    chose_warpon(e);
    attack(e);
    index_quest(e);

    return;
}
