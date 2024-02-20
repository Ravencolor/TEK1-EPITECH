/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** draw_skills.c
*/

#include "../include/my_rpg.h"

void init_skills_settings(elements *e)
{
    sfVector2f pos = {500, 500 };
    sfVector2f posR = {200, 500 };
    sfVector2f size = {1200 / 2, 500};
    e->rect_life = create_rectangle(pos, size);
    e->title_life = create_text("+life", pos, 50, sfBlack);
    e->title_life = set_text_middle_origine(e->title_life);
    pos.x += 350;
    pos.y += 680 / 2;
    sfText_setPosition(e->title_life, pos);
    pos.x -= 350;
    pos.y -= 680 / 2; pos.x += size.x + 80;
    e->rect_strengh = create_rectangle(pos, size);
    e->title_strlenght = create_text("+strenght", pos, 50, sfBlack);
    e->title_strlenght = set_text_middle_origine(e->title_strlenght);
    pos.x += 350;
    pos.y += 680 / 2;
    sfText_setPosition(e->title_strlenght, pos);
    pos.y += (680 / 2) + 150;
    e->return_skills = create_text("Return", posR, 50, sfWhite);
    e->red_return_skills = create_text("Return", posR, 50, sfRed);
}

void draw_skills_settings(elements *e)
{
    if (e->is_skills == 0) return;
    (sfRenderWindow_drawRectangleShape(e->win, e->rect_life, NULL));
    sfRenderWindow_drawRectangleShape(e->win, e->rect_strengh, NULL);
    sfRenderWindow_drawRectangleShape(e->win, e->rect_strengh, NULL);
    sfRenderWindow_drawText(e->win, e->title_life, NULL);
    sfRenderWindow_drawText(e->win, e->title_strlenght, NULL);
    if (is_survol_text(e, e->return_skills) == 0)
        sfRenderWindow_drawText(e->win, e->return_skills, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_return_skills, NULL);
    if (is_click_rect(e, e->rect_life) == 0) {
        improve_life(e);
    }
    if (is_click_text(e, e->return_skills) == 1) {
        e->is_skills = 0;
    }
}
