/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** enemy.c
*/

#include "../include/my_rpg.h"

void attack_demon(elements *e, int nb)
{
    if (e->life_enemy[nb] <= 0) {
        e->int_status_xp = 1;
        e->true_status_xp += 1;
        e->is_eneny[nb] = 1;
        return;
    }
    if (e->nb_quest == 1 && e->is_attack == 1) {
        e->life_enemy[nb] -= e->strenght;
        e->is_attack = 0;
        return;
    }
    return;
}

void init_enemy(elements *e, sfVector2f pos, int nb)
{
    if (e->is_eneny[nb] == 1) return;
    sfSprite *enemy = create_sprite("asset/enemy2.png", NULL);
    sfSprite_setPosition(enemy, pos);
    sfRenderWindow_drawSprite(e->win, enemy, NULL);
    attack_demon(e, nb);
    sfSprite_destroy(enemy);

    return;
}

void set_enemy(elements *e)
{
    sfVector2f pos = sfSprite_getPosition(e->maps);
    pos.x += 800;
    pos.y += 1500;
    init_enemy(e, pos, 0);
    pos = sfSprite_getPosition(e->maps);
    pos.x += 900;
    pos.y += 1500;
    if (e->life_enemy[0] <= 0)
        init_enemy(e, pos, 1);
    pos.x -= 100;
    pos.y += 100;
    if (e->life_enemy[1] <= 0)
        init_enemy(e, pos, 2);
    pos.y += 500;
    if (e->life_enemy[2] <= 0)
        init_enemy(e, pos, 3);

    return;
}
