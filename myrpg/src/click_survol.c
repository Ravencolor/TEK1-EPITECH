/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** click_survol.c
*/

#include "../include/my_rpg.h"

int is_survol_sprite(elements *e, sfSprite *sprite)
{
    sfBool bo = sfFalse;

    e->mouse = sfMouse_getPositionRenderWindow(e->win);
    sfFloatRect pos_check = sfSprite_getGlobalBounds(sprite);
    bo = sfFloatRect_contains(&pos_check, e->mouse.x, e->mouse.y);

    if (bo == sfTrue)
        return 1;
    return 0;
}

int is_click_sprite(elements *e, sfSprite *sprite)
{
    sfBool bo = sfFalse;

    e->mouse = sfMouse_getPositionRenderWindow(e->win);
    sfFloatRect pos_check = sfSprite_getGlobalBounds(sprite);
    bo = sfFloatRect_contains(&pos_check, e->mouse.x, e->mouse.y);

    if (bo == sfTrue && e->event.type == sfEvtMouseButtonReleased &&
    e->event.mouseButton.button == sfMouseLeft) {
        sfSound_play(e->sound_button);
        return 1;
    }
    return 0;
}

int is_click_rect(elements *e, sfRectangleShape *rect)
{
    sfBool bo = sfFalse;

    e->mouse = sfMouse_getPositionRenderWindow(e->win);
    sfFloatRect pos_check = sfRectangleShape_getGlobalBounds(rect);
    bo = sfFloatRect_contains(&pos_check, e->mouse.x, e->mouse.y);

    if (bo == sfTrue && e->event.type == sfEvtMouseButtonReleased &&
    e->event.mouseButton.button == sfMouseLeft) {
        sfSound_play(e->sound_button);
        return 1;
    }
    return 0;
}

int is_survol_text(elements *e, sfText *text)
{
    sfBool bo = sfFalse;

    e->mouse = sfMouse_getPositionRenderWindow(e->win);
    sfFloatRect pos_check = sfText_getGlobalBounds(text);
    bo = sfFloatRect_contains(&pos_check, e->mouse.x, e->mouse.y);

    if (bo == sfTrue)
        return 1;
    return 0;
}

int is_click_text(elements *e, sfText *text)
{
    sfBool bo = sfFalse;

    e->mouse = sfMouse_getPositionRenderWindow(e->win);
    sfFloatRect pos_check = sfText_getGlobalBounds(text);
    bo = sfFloatRect_contains(&pos_check, e->mouse.x, e->mouse.y);

    if (bo == sfTrue && e->event.type == sfEvtMouseButtonReleased &&
    e->event.mouseButton.button == sfMouseLeft) {
        sfSound_play(e->sound_button);
        return 1;
    }
    return 0;
}
