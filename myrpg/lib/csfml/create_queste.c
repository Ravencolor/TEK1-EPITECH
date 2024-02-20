/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_queste.c
*/

#include "csfml.h"

void create_queste(sfRenderWindow *window, char *title_quest, char *quest)
{
    sfRectangleShape *rect = create_rectangle
    ((sfVector2f){1620, 200}, (sfVector2f){300, 400});
    sfColor co = { 255, 200, 110, 255 };
    sfText *title = create_text(title_quest,
    (sfVector2f){1650, 200}, 60, sfBlack);
    sfText *title2 = create_text(quest,
    (sfVector2f){1630, 300}, 20, sfBlack);
    sfRectangleShape_setFillColor(rect, co);
    sfRenderWindow_drawRectangleShape(window, rect, NULL);
    sfRenderWindow_drawText(window, title, NULL);
    sfRenderWindow_drawText(window, title2, NULL);
    sfRectangleShape_destroy(rect);
    sfText_destroy(title);
    sfText_destroy(title2);
}
