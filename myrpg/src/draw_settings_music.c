/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** draw_settings_music.c
*/

#include "../include/my_rpg.h"

void music_settings(elements *e)
{
    if (is_click_text(e, e->txt_music) == 1 && e->pitch_music > 0.0) {
        sfMusic_setVolume(e->music, 0.0);
        e->pitch_music = 0;
        return;
    }
    if (is_click_text(e, e->txt_music) == 1 && e->pitch_music == 0.0) {
        sfMusic_setVolume(e->music, 100.0);
        e->pitch_music = 100.0;
        return;
    }
    if (is_click_text(e, e->plus) == 1) {
        e->pitch_music += 20.0;
        sfMusic_setVolume(e->music, e->pitch_music);
        return;
    }
    if (is_click_text(e, e->minus) == 1) {
        e->pitch_music -= 20.0;
        sfMusic_setVolume(e->music, e->pitch_music);
    }
}
