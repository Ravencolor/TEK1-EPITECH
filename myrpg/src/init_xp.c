/*
** EPITECH PROJECT, 2023
** init_xp
** File description:
** init_xp
*/

#include "../include/my_rpg.h"

void init_xp(elements *e)
{
    sfVector2f pos = {70, 980};
    sfVector2f scale = {0.7, 0.7};
    e->xp30 = create_sprite("asset/barreXp/xp_barre.png", NULL);
    sfSprite_setScale(e->xp30, scale);
    sfSprite_setPosition(e->xp30, pos);
    e->xp31 = create_sprite("asset/barreXp/xp_barre2.png", NULL);
    sfSprite_setScale(e->xp31, scale);
    sfSprite_setPosition(e->xp31, pos);
    e->xp32 = create_sprite("asset/barreXp/xp_barre3.png", NULL);
    sfSprite_setScale(e->xp32, scale);
    sfSprite_setPosition(e->xp32, pos);
    e->xp33 = create_sprite("asset/barreXp/xp_barre4.png", NULL);
    sfSprite_setScale(e->xp33, scale);
    sfSprite_setPosition(e->xp33, pos);
}
