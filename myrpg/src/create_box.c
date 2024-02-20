/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_box.c
*/

#include "../include/my_rpg.h"

void display_str(elements *e, char *str, char *who)
{
    sfRenderWindow_drawSprite(e->win, e->box, NULL);
    sfVector2f who_pos = {400, 720};
    e->box = set_sprite_middle_origine(e->box);
    sfSprite_setPosition(e->box, (sfVector2f){1920 / 2, 900});
    sfVector2f pos = sfSprite_getPosition(e->box);
    e->who_txt = create_text(who, who_pos, 40, sfWhite);

    e->txt_box = create_text(str, pos, 40, sfWhite);
    e->txt_box = set_text_middle_origine(e->txt_box);
    sfRenderWindow_drawText(e->win, e->txt_box, NULL);
    sfRenderWindow_drawText(e->win, e->who_txt, NULL);
    sfText_destroy(e->who_txt);
    sfText_destroy(e->txt_box);
}
