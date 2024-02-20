/*
** EPITECH PROJECT, 2023
** sprite
** File description:
** sprite
*/

#include "../includes/my.h"

int sprite(sfRenderWindow *w, sfEvent event)
{
    pinceau(w, event);
    gomme(w, event);
    crayon(w,event);
}

int pinceau(sfRenderWindow *w, sfEvent event)
{
sfTexture *texture = sfTexture_createFromFile("./outils/pinceau.png", NULL);
sfSprite *pinceau = sfSprite_create();
sfVector2f scale = {0.05, 0.05};
sfVector2f pos_t = {130, 100};
sfSprite_setPosition(pinceau, pos_t);
sfSprite_setTexture(pinceau, texture, sfTrue);
sfSprite_setScale(pinceau, scale);
sfRenderWindow_drawSprite(w, pinceau, NULL);
}

int gomme(sfRenderWindow *w, sfEvent event)
{
sfTexture *texture = sfTexture_createFromFile("./outils/gomme.png", NULL);
sfSprite *gomme = sfSprite_create();
sfVector2f scale = {0.05, 0.05};
sfVector2f pos_t = {100, 100};
sfSprite_setPosition(gomme, pos_t);
sfSprite_setTexture(gomme, texture, sfTrue);
sfSprite_setScale(gomme, scale);
sfRenderWindow_drawSprite(w, gomme, NULL);
}

int crayon(sfRenderWindow *w, sfEvent event)
{
sfTexture *texture = sfTexture_createFromFile("./outils/crayon.png", NULL);
sfSprite *crayon = sfSprite_create();
sfVector2f scale = {0.05, 0.05};
sfVector2f pos_t = {883, 320};
sfSprite_setPosition(crayon, pos_t);
sfSprite_setTexture(crayon, texture, sfTrue);
sfSprite_setScale(crayon, scale);
sfRenderWindow_drawSprite(w, crayon, NULL);
}
