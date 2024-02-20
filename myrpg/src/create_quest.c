/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_quest.c
*/

#include "../include/my_rpg.h"

void draw_quest(elements *e)
{
    char buffer[100];

    if (e->nb_quest == 0) {
        my_sprintf(buffer, "Find the heros items.\nWhen you terminate\n");
        e->a = my_strcat(buffer, "your quest return to speak\nto Jennifer.");
        create_queste(e->win, "Quest 1", e->a);
    }
    if (e->nb_quest == 1) {
        my_sprintf(buffer, "Fight the bottom monster.\nWhen you terminate\n");
        e->a = my_strcat(buffer, "your quest return to speak\nto Jennifer.");
        create_queste(e->win, "Quest 2", e->a);
    }
    if (e->nb_quest == 2)
        create_queste(e->win, "Final", "do yourself a favor.\nExplore now.\n");
}

void index_quest(elements *e)
{
    sfVector2f pos = sfSprite_getPosition(e->maps);
    pos.y += 160;
    pos.x += 850;
    sfRectangleShape *rect = create_rectangle(pos, (sfVector2f){50, 80});
    if (e->nb_quest == 0 && e->status_epee == 0 &&
    is_click_rect(e, rect) == 1) {
        e->nb_quest = 1;
        e->int_status_xp = 2;
        e->true_status_xp += 2;
        return;
    } if (e->nb_quest == 1 && e->life_enemy[3] <= 0 &&
    is_click_rect(e, rect) == 1) {
        e->nb_quest = 2;
        e->int_status_xp = 2;
        e->true_status_xp += 4;
    }
    sfRectangleShape_destroy(rect);
}
