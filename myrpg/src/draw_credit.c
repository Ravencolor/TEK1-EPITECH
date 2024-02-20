/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** draw_credit.c
*/

#include "../include/my_rpg.h"

void draw_credit(elements *e)
{
    sfRenderWindow_drawSprite(e->win, e->wallpaper, NULL);
    sfText_setPosition(e->retour_credit, (sfVector2f){400, 1000});
    sfText_setPosition(e->red_routour_credit, (sfVector2f){400, 1000});
    sfRenderWindow_drawText(e->win, e->retour_credit, NULL);

    get_element *el = malloc(sizeof(get_element));
    file_info("file/credit.txt", el);
    sfText *text = create_text(el->contenu, (sfVector2f){30, 50}, 30, sfWhite);
    if (is_survol_text(e, e->retour_credit) == 0)
        sfRenderWindow_drawText(e->win, e->retour_credit, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_routour_credit, NULL);
    if (is_click_text(e, e->retour_credit) == 1)
        e->status = 0;
    sfRenderWindow_drawText(e->win, text, NULL);
    free(el);

    return;
}

void click_credits(elements *e)
{
    if (is_click_text(e, e->retour_settings) == 1) e->status = 0;
    return;
}
