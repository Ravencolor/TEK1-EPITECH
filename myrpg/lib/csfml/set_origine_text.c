/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** set_origine_text.c
*/

#include "csfml.h"

void *set_text_middle_origine(sfText *text)
{
    sfFloatRect pos = sfText_getLocalBounds(text);
    sfVector2f size = {pos.width / 2, pos.height / 2};
    sfText_setOrigin(text, size);
    return text;
}
