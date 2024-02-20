/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** fraw_settings.c
*/

#include "../include/my_rpg.h"

void draw_settings2(elements *e)
{
    if (is_survol_text(e, e->minus) == 0)
        sfRenderWindow_drawText(e->win, e->minus, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_minus, NULL);
    if (is_survol_text(e, e->retour_settings) == 0)
        sfRenderWindow_drawText(e->win, e->retour_settings, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_retour_settings, NULL);
    if (is_survol_text(e, e->screen) == 0)
        sfRenderWindow_drawText(e->win, e->screen, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_screen, NULL);
    if (is_survol_text(e, e->txt_skills) == 0)
        sfRenderWindow_drawText(e->win, e->txt_skills, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_txt_skills, NULL);
}

void draw_settings(elements *e)
{
    sfRenderWindow_drawSprite(e->win, e->wallpaper, NULL);
    sfRenderWindow_drawSprite(e->win, e->logo_menu, NULL);
    draw_screen_settings(e);
    draw_skills_settings(e);
    if (e->is_screen == 1 || e->is_skills == 1)
        return;
    if (is_survol_text(e, e->txt_music) == 0)
        sfRenderWindow_drawText(e->win, e->txt_music, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_txt_music, NULL);
    if (is_survol_text(e, e->plus) == 0)
        sfRenderWindow_drawText(e->win, e->plus, NULL);
    else
        sfRenderWindow_drawText(e->win, e->red_plus, NULL);
    draw_settings2(e);
}

void display_settings(elements *e)
{
    if (e->is_screen == 0 && is_click_text(e, e->screen) == 1) {
        e->is_screen = 1;
    } if (e->is_screen == 1 && is_click_text(e, e->winodw) == 1) {
        sfRenderWindow_close(e->win);
        e->win = create_window(1920, 1080);
    } if (e->is_screen == 1 && is_click_text(e, e->petit) == 1) {
        sfRenderWindow_close(e->win);
        e->win = create_window(1280, 720);
    } if (e->is_screen == 1 && is_click_text(e, e->fullscreen) == 1) {
        sfRenderWindow_close(e->win);
        e->win = create_window_fullscreen(1920, 1080);
    } if (e->is_screen == 1 && is_click_text(e, e->return_screen) == 1) {
        e->is_screen = 0;
    } if (e->is_screen == 1 && is_click_text(e, e->grand) == 1) {
        sfRenderWindow_close(e->win);
        e->win = create_window(1920, 1080);
    }
}

void click_menu_settings(elements *e)
{
    if (e->status != 1) return;
    music_settings(e);
    display_settings(e);
    if (is_click_text(e, e->retour_settings) == 1) {
        if (e->old_status == 3)
            e->status = 3;
        if (e->old_status != 3)
            e->status = 0;
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        e->status = 3;
    }
    if (is_click_rect(e, e->rect_life) == 1) {
        e->is_skills = 1;
    }
    if (is_click_rect(e, e->rect_strengh) == 1) {
        improve_strength(e);
    }
}
