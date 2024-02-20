/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_sprite.c
*/

#include "csfml.h"

sfSprite *create_sprite(char *name, const sfIntRect *area)
{
    sfTexture *texture;
    sfSprite *sprite;

    texture = sfTexture_createFromFile(name, area);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    return sprite;
}
