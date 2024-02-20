/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** set_origine_rect.c
*/

#include "csfml.h"

void *set_rect_middle_origine(sfRectangleShape *rect)
{
    sfFloatRect pos = sfRectangleShape_getLocalBounds(rect);
    sfVector2f size = {pos.left + pos.width / 2.f, pos.top + pos.height / 2.f};
    sfRectangleShape_setOrigin(rect, size);

    return rect;
}
