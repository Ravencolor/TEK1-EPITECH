/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_attack.c
*/

#include "../include/my_rpg.h"

void attack(elements *e)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        e->is_attack = 1;
        return;
    } else {
        e->is_attack = 0;
    }
    return;
}

void chose_warpon(elements *e)
{
    if (sfKeyboard_isKeyPressed(sfKeyNumpad1) ||
    sfKeyboard_isKeyPressed(sfKeyNum1)) {
        e->inv_is_active = 0;
    } if (sfKeyboard_isKeyPressed(sfKeyNumpad2) ||
    sfKeyboard_isKeyPressed(sfKeyNum2)) {
        e->inv_is_active = 1;
    } if (sfKeyboard_isKeyPressed(sfKeyNumpad3) ||
    sfKeyboard_isKeyPressed(sfKeyNum3)) {
        e->inv_is_active = 2;
    } if (sfKeyboard_isKeyPressed(sfKeyNumpad4) ||
    sfKeyboard_isKeyPressed(sfKeyNum4)) {
        e->inv_is_active = 3;
    } if (sfKeyboard_isKeyPressed(sfKeyNumpad5) ||
    sfKeyboard_isKeyPressed(sfKeyNum5)) {
        e->inv_is_active = 4;
    } if (sfKeyboard_isKeyPressed(sfKeyNumpad6) ||
    sfKeyboard_isKeyPressed(sfKeyNum6)) {
        e->inv_is_active = 5;
    }
}
