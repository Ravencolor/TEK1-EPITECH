/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_text.c
*/

#include "csfml.h"

sfText *create_text(char *contenu, sfVector2f pos, int weight, sfColor color)
{
    sfFont *font = NULL;
    sfText *text = sfText_create();
    sfText_setString(text, contenu);
    sfText_setColor(text, color);
    font = sfFont_createFromFile("font/font_weight_menu.ttf");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, weight);
    sfText_setPosition(text, pos);

    return text;
}

sfText *create_charactere(char contenu, sfVector2f pos, int wei, sfColor color)
{
    sfFont *font = NULL;
    sfText *text = sfText_create();
    sfText_setString(text, &contenu);
    sfText_setColor(text, color);
    font = sfFont_createFromFile("font/font_weight_menu.ttf");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, wei);
    sfText_setPosition(text, pos);

    return text;
}
