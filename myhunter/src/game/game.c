/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** game_view
*/

#include <unistd.h>
#include "../../include/my.h"

void game_function(sfRenderWindow* w, sfEvent event)
{
    sfTexture *cible_t = sfTexture_createFromFile("./rsc/cible.png", NULL);
    sfSprite *cible_s = sfSprite_create();
    sfVector2f cible_scale = {1.3, 1.5};
    sfSprite_setTexture(cible_s, cible_t, sfTrue);
    sfSprite_setScale(cible_s, cible_scale);
    while (sfRenderWindow_isOpen(w)) {
        sfRenderWindow_pollEvent(w, &event);
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(w);
        sfRenderWindow_clear(w, sfWhite);
        sfRenderWindow_drawSprite(w, cible_s, NULL);
        sfRenderWindow_display(w);
        int x_cible = 0 + x_cible + 1;
        sfVector2f cible_pos = {0 + x_cible, 140};
        sfSprite_setPosition(cible_s, cible_pos);
        sfIntRect rectangle = {x_cible/9 - 1, 115, 50, 50};
        sfSprite_setTextureRect(cible_s, rectangle);
        if (x_cible >= 1900)
            x_cible = -100;

    }
}
