/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** init_var.c
*/

#include "../include/my_rpg.h"

void init_same_value(elements *e)
{
    e->status_epee = 1;
    e->inv_is_active = 0;
    e->strenght = 5;
    e->int_status_life = 3;
    e->inv_is_active = 5;
    e->true_status_xp = 0;
    e->status_game = 0;
    e->display_inventary = 1;
    e->moove = 28;
    e->rect_pp = 0;
    e->int_status_xp = 0;
    init_xp(e);
    e->moove = 28;
    e->rect_pp = 0;
    e->is_attack = 0;
    init_inventary(e);
    create_text_settings(e);
    create_text_settings_red(e);
    e->skill_ptn = 0;
    e->nb_quest = 0;
}

void initialisation2(elements *e)
{
    init_same_value(e);
    init_skills_settings(e);
    e->a = malloc(sizeof(char) * 100);
    create_screen_settings_white(e);
    e->life_max = 3;
    create_screen_settings_red(e);
    e->is_skills = 0;
    e->weapon_sword = create_sprite("asset/epee.png", NULL);
    sfSprite_setPosition(e->weapon_sword, (sfVector2f){2820 / 2, 1200 / 2});
    create_all_text_survol(e);
    create_all_text_manu(e);
    init_life(e);
    for (int i = 0; i < 8; i++) {
        e->state[i] = 0;
        e->is_eneny[i] = 0;
        e->life_enemy[i] = 20;
    }
    return;
}

elements *initialisation(void)
{
    elements *e = malloc(sizeof(elements));
    e->win = create_window(1920, 1080);
    e->sound_button = create_sound("sound/clic_menu.ogg");
    init_dead_and_sprites(e);
    e->box = create_sprite("asset/speak_box.png", NULL);
    e->txt_box = create_text("init_text_box",
    (sfVector2f){1920 / 2, (1080)}, 40, sfWhite);
    e->retour_credit = create_text("Return",
    (sfVector2f){1920 / 2, (1080)}, 40, sfWhite);
    e->red_routour_credit = create_text("Return",
    (sfVector2f){1920 / 2, (1080)} , 40, sfRed);
    e->is_1366 = 0;
    e->is_1920 = 1;
    e->status = 0;
    e->old_status = 1;
    initialisation2(e);
    return e;
}

void init_dead_and_sprites(elements *e)
{
    e->wallpaper = create_sprite("asset/img_menu.jpg", NULL);
    e->maps = create_sprite("asset/map.png", NULL);
    e->maps = set_sprite_middle_origine(e->maps);
    e->pos_pp = sfSprite_getPosition(e->maps);
    e->pos_pp.x -= 50;
    sfSprite_setPosition(e->maps, e->pos_pp);
    e->logo_menu = create_sprite("asset/menu.png", NULL);
    e->mess_dead = create_text("Your are dead",
    (sfVector2f){1920 / 2, 1080 / 2}, 50, sfRed);
    e->check = create_text("Checkpoint",
    (sfVector2f){1920 / 2, (1080 / 2 + 100)}, 40, sfWhite);
    e->quit_dead = create_text("Quit",
    (sfVector2f){1920 / 2, (1080 / 2 + 150)}, 40, sfWhite);
    e->mess_dead = set_text_middle_origine(e->mess_dead);
    e->check = set_text_middle_origine(e->check);
    e->quit_dead = set_text_middle_origine(e->quit_dead);
    sfSprite_setPosition(e->logo_menu, (sfVector2f){1870, 0});

    return;
}

void init_life(elements *e)
{
    sfVector2f scale = {0.3, 0.3};
    e->hp30 = create_sprite("asset/3vies/life_0.png", NULL);
    sfSprite_setScale(e->hp30, scale);
    e->hp31 = create_sprite("asset/3vies/life_1.png", NULL);
    sfSprite_setScale(e->hp31, scale);
    e->hp32 = create_sprite("asset/3vies/life_2.png", NULL);
    sfSprite_setScale(e->hp32, scale);
    e->hp33 = create_sprite("asset/3vies/life_3.png", NULL);
    sfSprite_setScale(e->hp33, scale);
}
