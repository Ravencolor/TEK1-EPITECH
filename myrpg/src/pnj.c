/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** pnj.c
*/

#include "../include/my_rpg.h"

void display_pnj(elements *e, int box)
{
    int yy = 0; sfSprite *sprite = NULL;

    float spriteWidth = 450 / 2;
    float spriteHeight = 444 / 1;
    sfIntRect rect;
    rect.width = spriteWidth;
    rect.height = spriteHeight;
    rect.top = spriteHeight * yy;
    rect.left = spriteWidth * box;
    sprite = create_sprite("asset/pnj.png", NULL);
    sprite = set_sprite_middle_origine(sprite);
    sfSprite_setTextureRect(sprite, rect);
    sfVector2f pos = sfSprite_getPosition(e->maps);
    pos.y += 200;
    pos.x += 900;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, (sfVector2f){0.2, 0.2});
    sfRenderWindow_drawSprite(e->win, sprite, NULL);
    sfSprite_destroy(sprite);
}

void move_pnj_down(elements *e)
{
    if (e->state[5] == 0) {
        e->state[5] += 1;
        display_pnj(e, 0);
    } else {
        e->state[5] = 0;
    }
    return;
}

void move_pnj_up(elements *e)
{
    if (e->state[4] == 0) {
        e->state[4] += 1;
    } else {
        e->state[4] = 0;
        display_pnj(e, 1);
    }
    return;
}

void move_pnj(elements *e)
{
    if (e->state[3] == 0) {
        e->state[3] += 1;
        move_pnj_down(e);
    } else {
        e->state[3] = 0;
        move_pnj_up(e);
    }
    return;
}
