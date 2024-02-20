/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_menu.c
*/

#include "../include/my_rpg.h"
void create_all_text_manu(elements *e)
{
    double i = 1.0;
    if (e->is_1366 == 1)
        i = 1.40;
    sfVector2f pos = {(350 / i), (430 / i)};
    e->play = create_text("PLAY", pos, 100, sfWhite);
    pos.y = ((1080 / 2) / i);
    e->replay = create_text("RESUME", pos, 50, sfWhite);
    pos.y = ((1080 / 2) / i) + 50;
    e->settings = create_text("SETTINGS", pos, 50, sfWhite);
    pos.y = ((1080 / 2) / i) + 100;
    e->credit = create_text("CREDIT", pos, 50, sfWhite);
    pos.y = ((1080 / 2) / i) + 150;
    e->quit = create_text("QUITTER", pos, 50, sfWhite);

}

void create_all_text_survol(elements *e)
{
    double i = 1.0;
    if (e->is_1366 == 1)
        i = 1.40;
    sfVector2f pos = {(350 / i), (430 / i)};
    e->red_play = create_text("PLAY", pos, 100, sfRed);
    pos.y = ((1080 / 2) / i);
    e->red_replay = create_text("RESUME", pos, 50, sfRed);
    pos.y = ((1080 / 2) / i) + 50;
    e->red_settings = create_text("SETTINGS", pos, 50, sfRed);
    pos.y = ((1080 / 2) / i) + 100;
    e->red_credit = create_text("CREDIT", pos, 50, sfRed);
    pos.y = ((1080 / 2) / i) + 150;
    e->red_quit = create_text("QUITTER", pos, 50, sfRed);

}
