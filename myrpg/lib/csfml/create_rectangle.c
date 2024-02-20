/*
** EPITECH PROJECT, 2022
** my_app_luna
** File description:
** create_rectangle.c
*/

#include "csfml.h"

sfRectangleShape *create_rectangle(sfVector2f pos, sfVector2f size)
{
    sfRectangleShape *squar = sfRectangleShape_create();
    sfRectangleShape_setFillColor(squar, sfWhite);
    sfRectangleShape_setSize(squar, size);
    sfRectangleShape_setPosition(squar, pos);

    return squar;
}
