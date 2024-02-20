/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** draw_settings_in_game.c
*/

#include "../include/my_rpg.h"

void bloc_settings(elements *e)
{
    if (is_click_sprite(e, e->logo_menu) == 1)
        e->status = 1;
    if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue) {
        e->status = 1;
    }

    return;
}
