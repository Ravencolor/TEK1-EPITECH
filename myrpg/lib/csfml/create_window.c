/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_window.c
*/

#include "csfml.h"

sfRenderWindow *create_window(int x, int y)
{
    sfRenderWindow *window;
    sfVideoMode mode = {x, y, 32};
    window = sfRenderWindow_create(mode, "My_rpg", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    return window;
}
