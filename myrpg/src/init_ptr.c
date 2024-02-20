/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** init_ptr.c
*/

#include "../include/my_rpg.h"

func_ptr* init_event_ptr(void)
{
    func_ptr* ptr_envt = malloc(4 * sizeof(func_ptr));

    ptr_envt[0] = &menu_is_click;
    ptr_envt[1] = &click_menu_settings;
    ptr_envt[2] = &click_credits;
    ptr_envt[3] = &click_game;

    return ptr_envt;
}

func_ptr* init_event_draw(void)
{
    func_ptr* ptr_draw = malloc(4 * sizeof(func_ptr));

    ptr_draw[0] = &draw_menu;
    ptr_draw[1] = &draw_settings;
    ptr_draw[2] = &draw_credit;
    ptr_draw[3] = &draw_game;

    return ptr_draw;
}
