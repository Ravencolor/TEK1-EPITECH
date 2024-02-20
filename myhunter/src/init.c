/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** desc
*/

#include <unistd.h>
#include "../include/my.h"

void init(GLOBAL_T *a)
{
    init_window(a);
    init_sprite(a);
}

void init_window(GLOBAL_T *a)
{
    a->s.m.bitsPerPixel = 32;
    a->s.m.height = 1080;
    a->s.m.width = 1920;
    a->s.w = sfRenderWindow_create(a->s.m, "Hunter", sfResize | sfClose, NULL);
}

void init_sprite(GLOBAL_T *a)
{
    a->pic = malloc(sizeof(IMG_T) * 2);
    a->pic[0].texture = sfTexture_createFromFile("./rsc/menu.jpg", NULL);
    a->pic[0].sprite = sfSprite_create();
    a->pic[0].scale.x = 0.5;
    a->pic[0].scale.y = 0.5;

    sfSprite_setTexture(a->pic[0].sprite, a->pic[0].texture, sfTrue);
    sfSprite_setScale(a->pic[0].sprite, a->pic[0].scale);

    a->pic[1].texture = sfTexture_createFromFile("./rsc/sb.png", NULL);
    a->pic[1].sprite = sfSprite_create();
    a->pic[1].scale.x = 1;
    a->pic[1].scale.y = 1;
    a->pic[1].pos.x = 700;
    a->pic[1].pos.y = 10;

    sfSprite_setTexture(a->pic[1].sprite, a->pic[1].texture, sfTrue);
    sfSprite_setScale(a->pic[1].sprite, a->pic[1].scale);
    sfSprite_setPosition(a->pic[1].sprite,a->pic[1].pos);
}
