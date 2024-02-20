/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** main_perso.c
*/

#include "../include/my_rpg.h"

void moove_pp(elements *e)
{
    if (e->display_inventary == 1) return;
    sfVector2f pos = sfSprite_getPosition(e->maps);
    if (sfKeyboard_isKeyPressed(sfKeyZ) ||
    sfKeyboard_isKeyPressed(sfKeyUp)) {
        move_up(e);
        pos.y += 10;
        e->pos_pp.y += 10;
    } if (sfKeyboard_isKeyPressed(sfKeyS) ||
    sfKeyboard_isKeyPressed(sfKeyDown)) {
        move_down(e);
        pos.y -= 10;
    } if (sfKeyboard_isKeyPressed(sfKeyQ) ||
    sfKeyboard_isKeyPressed(sfKeyLeft)) {
        move_left(e);
        pos.x += 10;
    } if (sfKeyboard_isKeyPressed(sfKeyD) ||
    sfKeyboard_isKeyPressed(sfKeyRight)) {
        move_right(e);
        pos.x -= 10;
    } sfSprite_setPosition(e->maps, pos);
}
