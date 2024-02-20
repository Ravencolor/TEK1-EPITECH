/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** put_items.c
*/

#include "../include/my_rpg.h"

void put_items_in_case(elements *e, sfSprite *sprite)
{
    inventary *loop = e->inv;
    int i = 0;
    while (loop->next != NULL) {
        if (loop->is_occuped == 1)
            break;
        loop = loop->next;
        i++;
    }
    sfVector2f pos = sfRectangleShape_getPosition(loop->rect);
    sfSprite_setPosition(sprite, pos);
    sfRenderWindow_drawSprite(e->win, sprite, NULL);
    return;
}
