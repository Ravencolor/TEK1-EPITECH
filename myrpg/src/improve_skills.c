/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** improve_skills.c
*/

#include "../include/my_rpg.h"

void improve_strength(elements *e)
{
    if (e->state[7] == 0) {
        e->state[7] += 1;
        if (e->true_status_xp >= 4) {
            e->strenght += 5;
            e->true_status_xp -= 4;
        }
    } else
        e->state[7] = 0;
}

void improve_life(elements *e)
{
    sfSprite_destroy(e->hp30);
    sfSprite_destroy(e->hp31);
    sfSprite_destroy(e->hp32);
    sfSprite_destroy(e->hp33);
    sfVector2f scale = {0.3, 0.3}; e->int_status_life = 5;
    e->hp30 = create_sprite("asset/5vies/hp0.png", NULL);
    sfSprite_setScale(e->hp30, scale);
    e->hp31 = create_sprite("asset/5vies/hp1.png", NULL);
    sfSprite_setScale(e->hp31, scale);
    e->hp32 = create_sprite("asset/5vies/hp2.png", NULL);
    sfSprite_setScale(e->hp32, scale);
    e->hp33 = create_sprite("asset/5vies/hp3.png", NULL);
    sfSprite_setScale(e->hp33, scale);
    e->hp34 = create_sprite("asset/5vies/hp4.png", NULL);
    sfSprite_setScale(e->hp34, scale);
    e->hp35 = create_sprite("asset/5vies/hp5.png", NULL);
    sfSprite_setScale(e->hp35, scale); e->life_max = 5;
}
