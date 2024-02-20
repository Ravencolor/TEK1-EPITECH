/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** spritesheet.c
*/

#include "../include/my_rpg.h"

char *which_tilesheet(elements *e)
{
    char *path_epee_up = "asset/epee_haut.png";
    char *path_epee_down = "asset/epee_bas.png";
    char *none = "asset/sprite_pp.png";

    if (e->is_attack == 1 && e->status_epee == 0) {
        return path_epee_down;
    }
    if (e->status_epee == 0)
        return path_epee_up;

    return none;
}

void draw_pp(elements *e)
{
    draw_in_map(e);
    char *str = which_tilesheet(e);
    if (e->moove == 0)
        display_case_tilesheet(0, e->win, str);
    else
        display_case_tilesheet(e->moove, e->win, str);

    return;
}
