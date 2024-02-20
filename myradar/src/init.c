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
    a->s.w = sfRenderWindow_create(a->s.m, "MyRadar", sfResize | sfClose, NULL);
}

void init_sprite(GLOBAL_T *a)
{
    a->pic = malloc(sizeof(IMG_T) * 2);
    a->pic[0].texture = sfTexture_createFromFile("./rsc/menu.jpg", NULL);
    a->pic[0].sprite = sfSprite_create();
    a->pic[0].scale.x = 4;
    a->pic[0].scale.y = 3.5;

    sfSprite_setTexture(a->pic[0].sprite, a->pic[0].texture, sfTrue);
    sfSprite_setScale(a->pic[0].sprite, a->pic[0].scale);

}
