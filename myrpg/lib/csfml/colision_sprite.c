/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** colision_sprite.c
*/

#include <stdio.h>
#include "csfml.h"

int is_colision_hero_items(sfSprite *sprite1, sfRectangleShape *rect)
{
    sfFloatRect rect1 = sfSprite_getGlobalBounds(sprite1);
    sfFloatRect rect2 = sfRectangleShape_getGlobalBounds(rect);
    if (sfFloatRect_intersects(&rect1, &rect2, NULL)) {
        return 1;
    } else {
        return 0;
    }
    return 0;
}
