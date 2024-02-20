/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** set_origine_sprite.c
*/

#include "csfml.h"

void *set_sprite_middle_origine(sfSprite *sprite)
{
    sfFloatRect pos = sfSprite_getLocalBounds(sprite);
    sfVector2f size = {pos.width / 2, pos.height / 2};
    sfSprite_setOrigin(sprite, size);

    return sprite;
}
