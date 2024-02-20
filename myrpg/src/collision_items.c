/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** collision_items.c
*/


#include "../include/my_rpg.h"

void draw_items(elements *e, sfSprite *sprite)
{
    sfVector2f pos = sfSprite_getPosition(e->maps);
    sfSprite_setScale(sprite, (sfVector2f){0.3, 0.3});
    pos.y += 500; pos.x += 700;
    sfSprite_setPosition(sprite, pos);
    sfRenderWindow_drawSprite(e->win, sprite, NULL);
}

void walk_items(elements *e)
{
    if (is_colision_hero_items(e->weapon_sword, e->rect_bwn_pp) == 1) {
        sfSprite_destroy(e->weapon_sword);
        e->weapon_sword = create_items("asset/epee.png");
        put_items_in_case(e, e->weapon_sword);
        e->status_epee = 0;
    }
    return;
}