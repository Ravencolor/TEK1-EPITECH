/*
** EPITECH PROJECT, 2023
** option_file
** File description:
** option_file
*/

#include "../includes/my.h"

int option_file(sfRenderWindow *w, sfEvent event)
{
    new_file(w, event);
    save_file(w, event);
    open_file(w, event);
}

int open_file(sfRenderWindow *w, sfEvent event)
{
    sfFont* font3;
    sfText* text3;

    font3 = sfFont_createFromFile("Arial.ttf");
    text3 = sfText_create();
    sfText_setFont(text3, font3);
    sfText_setString(text3, "Open File");
    sfText_setCharacterSize(text3, 15);
    sfText_setFillColor(text3, sfRed);
    sfText_setPosition(text3, (sfVector2f){200, 0});
    sfText_setStyle(text3, sfTextBold | sfTextUnderlined);
    sfRenderWindow_drawText(w, text3, NULL);

    sfText_destroy(text3);
    sfFont_destroy(font3);

    return 0;
}

int save_file(sfRenderWindow *w, sfEvent event)
{
    sfFont* font2;
    sfText* text2;

    font2 = sfFont_createFromFile("Arial.ttf");
    text2 = sfText_create();
    sfText_setFont(text2, font2);
    sfText_setString(text2, "Save File");
    sfText_setCharacterSize(text2, 15);
    sfText_setFillColor(text2, sfRed);
    sfText_setPosition(text2, (sfVector2f){100, 0});
    sfText_setStyle(text2, sfTextBold | sfTextUnderlined);
    sfRenderWindow_drawText(w, text2, NULL);

    sfText_destroy(text2);
    sfFont_destroy(font2);

    return 0;
}

int new_file(sfRenderWindow *w, sfEvent event)
{
    sfFont* font;
    sfText* text;

    font = sfFont_createFromFile("Arial.ttf");
    text = sfText_create();
    sfText_setFont(text, font);
    sfText_setString(text, "New File");
    sfText_setCharacterSize(text, 15);
    sfText_setFillColor(text, sfRed);
    sfText_setPosition(text, (sfVector2f){0, 0});
    sfText_setStyle(text, sfTextBold | sfTextUnderlined);
        sfRenderWindow_drawText(w, text, NULL);
}
