/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_view.c
*/

#include "csfml.h"

sfView* create_view(sfRenderWindow* window)
{
    sfView* view = sfView_create();
    sfView_setSize(view, (sfVector2f){1920, 1080});
    sfView_setCenter(view, (sfVector2f){1920 / 2.0, 1080 / 2.0});
    sfRenderWindow_setView(window, view);

    return view;
}
