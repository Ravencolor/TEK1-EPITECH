/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** primary_move.c
*/

#include "../include/my_rpg.h"

void move_up(elements *e)
{
    if (e->moove == 3) {
        e->moove = 6;
        return;
    } else
        e->moove = 3;
}

void move_down(elements *e)
{
    if (e->moove == 29) {
        e->moove = 28;
        return;
    } else
        e->moove = 29;
}

void move_left(elements *e)
{
    if (e->moove == 10) {
        e->moove = 13;
        return;
    } else
        e->moove = 10;
}

void move_right(elements *e)
{
    if (e->moove == 20) {
        e->moove = 22;
        return;
    } else
        e->moove = 20;
}
