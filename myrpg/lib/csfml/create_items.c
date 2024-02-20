/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_items.c
*/

#include "csfml.h"

sfSprite *create_items(char *pathfile)
{
    sfSprite *sprite = create_sprite(pathfile, NULL);

    sfVector2f size = {0.2, 0.2};
    sfSprite_setScale(sprite, size);

    return sprite;
}
