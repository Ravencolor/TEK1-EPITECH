/*
** EPITECH PROJECT, 2023
** help
** File description:
** help
*/

#include "../includes/my.h"

int help(sfRenderWindow *w, sfEvent event)
{
    sfFont* font3;
    sfText* text3;

    font3 = sfFont_createFromFile("Arial.ttf");
    text3 = sfText_create();
    sfText_setFont(text3, font3);
    sfText_setString(text3, "Help");
    sfText_setCharacterSize(text3, 15);
    sfText_setFillColor(text3, sfRed);
    sfText_setPosition(text3, (sfVector2f){300, 0});
    sfText_setStyle(text3, sfTextBold | sfTextUnderlined);
    sfRenderWindow_drawText(w, text3, NULL);

    sfText_destroy(text3);
    sfFont_destroy(font3);

    return 0;
}
