/*
** EPITECH PROJECT, 2022
** window
** File description:
** window
*/

#include "../includes/my.h"

int window(sfRenderWindow *w, sfEvent event)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfFont* font; sfText* text;

    w = sfRenderWindow_create(mode, "MY_PAINT", sfResize | sfClose, NULL);
        while (sfRenderWindow_isOpen(w)) {
            (sfRenderWindow_pollEvent(w, &event));
                if (event.type == sfEvtClosed) {
                    sfRenderWindow_close(w);
                }
        sfRenderWindow_clear(w, sfWhite);
        option_file(w, event);
        help(w, event);
        sprite(w, event);
        sfRenderWindow_display(w);
        if_click_option(w, event);
        if_click_b(w, event);
        }
        return 0;
}

void if_click_option(sfRenderWindow* w, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(w);
    if (mouse.x >= 133 && mouse.x <= 155 && mouse.y >= 100 && mouse.y <= 125) {
        if (event.type == sfEvtMouseButtonPressed)
            stylo(w, event);
    }
    if (mouse.x >= 100 && mouse.x <= 125 && mouse.y >= 100 && mouse.y <= 125) {
        if (event.type == sfEvtMouseButtonPressed)
            gomme2(w, event);
    }
}

void if_click_b(sfRenderWindow* w, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(w);

    if (mouse.x >= 0 && mouse.x <= 65 && mouse.y >= 0 && mouse.y <= 17) {
        if (event.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(w);
            window(w, event);
        }
    }
    if (mouse.x >= 97 && mouse.x <= 170 && mouse.y >= 0 && mouse.y <= 17) {
        if (event.type == sfEvtMouseButtonPressed)
            save_window(w, "screenshot.png");
    }
    if (mouse.x >= 200 && mouse.x <= 270 && mouse.y >= 0 && mouse.y <= 17) {
        if (event.type == sfEvtMouseButtonPressed)
            write(1, "pas encore fait\n", 17);
    }
    if (mouse.x >= 300 && mouse.x <= 330 && mouse.y >= 0 && mouse.y <= 17) {
        if (event.type == sfEvtMouseButtonPressed)
            write(1, "pas encore fait\n", 17);
    }
}

void save_window(sfRenderWindow* w, const char* filename)
{
    sfImage* screenshot = sfRenderWindow_capture(window);
    sfBool success = sfImage_saveToFile(screenshot, filename);
    sfImage_destroy(screenshot);

}
