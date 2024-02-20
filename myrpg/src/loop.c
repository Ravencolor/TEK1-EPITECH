/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** loop.c
*/

#include "../include/my_rpg.h"

void main_loop(void)
{
    elements *e = initialisation();
    func_ptr *ptr_evt = init_event_ptr();
    e->music = create_music("music/main_music.ogg");
    sfMusic_setVolume(e->music, 20);
    func_ptr *ptr_draw = init_event_draw();
    e->pitch_music = sfMusic_getVolume(e->music);
    while (sfRenderWindow_isOpen(e->win)) {
        while (sfRenderWindow_pollEvent(e->win, &e->event)) {
            (e->event.type == sfEvtClosed) ? sfRenderWindow_close(e->win) : 0;
            ptr_evt[e->status](e);
        }
        sfRenderWindow_clear(e->win, sfBlack);
        e->old_status = 0;
        ptr_draw[e->status](e);
        sfRenderWindow_display(e->win);
    }
}
