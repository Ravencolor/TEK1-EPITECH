/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_txt_settings.c
*/

#include "../include/my_rpg.h"


void create_text_settings_red(elements *e)
{
    double i = 1.0;
    if (e->is_1366 == 1)
        i = 1.40;
    sfVector2f pos = {(300 / i), (400 / i)};
    e->red_plus = create_text("+", pos, 50, sfRed);
    pos.x += 30;
    e->red_txt_music = create_text("Music", pos, 50, sfRed);
    pos.x += 150;
    e->red_minus = create_text("-", pos, 50, sfRed);
    pos.x += (100 / i);
    e->red_screen = create_text("SCREEN", pos, 50, sfRed);
    pos.y += (150 / i); pos.x -= (150 / i);
    e->red_txt_skills = create_text("Skills", pos, 50, sfRed);
    pos.y += (150 / i); pos.x -= (150 / i);
    e->red_retour_settings = create_text("Return", pos, 50, sfRed);
    create_screen_settings_white(e);
}

void create_text_settings(elements *e)
{
    double i = 1.0;
    if (e->is_1366 == 1)
        i = 1.40;
    sfVector2f pos = {(300 / i), (400 / i)};
    e->plus = create_text("+", pos, 50, sfWhite);
    pos.x += 30;
    e->txt_music = create_text("Music", pos, 50, sfWhite);
    pos.x += 150;
    e->minus = create_text("-", pos, 50, sfWhite);
    pos.x += (100 / i);
    e->screen = create_text("SCREEN", pos, 50, sfWhite);
    pos.y += (150 / i); pos.x -= (150 / i);
    e->txt_skills = create_text("Skills", pos, 50, sfWhite);
    pos.y += (150 / i); pos.x -= (150 / i);
    e->retour_settings = create_text("Return", pos, 50, sfWhite);
}

void create_screen_settings_white(elements *e)
{
    e->is_screen = 0;
    double i = 1.0;
    if (e->is_1366 == 1)
        i = 1.40;
    sfVector2f pos = {(300 / i), (400 / i)};
    e->grand = create_text("1920x1080", pos, 50, sfWhite);
    pos.y = (500 / i);
    e->petit = create_text("1280x720", pos, 50, sfWhite);
    pos.y = (600 / i);
    e->fullscreen = create_text("FULLSCREEN", pos, 50, sfWhite);
    pos.y = (700 / i);
    e->winodw = create_text("WINDOW", pos, 50, sfWhite);
    pos.y = (800 / i);
    e->return_screen = create_text("Return", pos, 50, sfWhite);
}

void create_screen_settings_red(elements *e)
{
    double i = 1.0;
    if (e->is_1366 == 1)
        i = 1.40;
    sfVector2f pos = {(300 / i), (400 / i)};
    e->red_grand = create_text("1920x1080", pos, 50, sfRed);
    pos.y = (500 / i);
    e->red_petit = create_text("1280x720", pos, 50, sfRed);
    pos.y = (600 / i);
    e->red_fullscreen = create_text("FULLSCREEN", pos, 50, sfRed);
    pos.y = (700 / i);
    e->red_window = create_text("WINDOW", pos, 50, sfRed);
    pos.y = (800 / i);
    e->red_return_screen = create_text("Return", pos, 50, sfRed);
    create_screen_settings_white(e);
}
