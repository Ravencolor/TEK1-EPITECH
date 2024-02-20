/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_text_grass.c
*/

#include "csfml.h"


sfText *create_text_grass(char **str, sfVector2f pos, int wei[2], sfColor col)
{
    sfFont *font = NULL;
    sfText *text = sfText_create();
    sfText_setString(text, str[0]);
    sfText_setColor(text, col);
    font = sfFont_createFromFile(str[1]);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, wei[0]);
    sfText_setOutlineThickness(text, wei[1]);
    sfText_setPosition(text, pos);

    return text;
}
