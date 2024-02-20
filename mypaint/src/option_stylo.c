/*
** EPITECH PROJECT, 2022
** window
** File description:
** window
*/

#include "../includes/my.h"

int stylo(sfRenderWindow* w, sfEvent event)
{
    sfVertexArray* lines = sfVertexArray_create();
    sfVertexArray_setPrimitiveType(lines, sfLinesStrip);
    while (sfRenderWindow_isOpen(w)) {
        (sfRenderWindow_pollEvent(w, &event));
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(w);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfVector2i mouse = sfMouse_getPositionRenderWindow(w);
            sfVertex vertex = {mouse.x, mouse.y, sfBlack};
            sfVertexArray_append(lines, vertex);
        }
        sfRenderWindow_drawVertexArray(w, lines, NULL);
        sfRenderWindow_display(w);
    }
    sfVertexArray_destroy(lines);
    sfRenderWindow_destroy(w);
    return 0;
}

int gomme2(sfRenderWindow* w, sfEvent event)
{
    sfVertexArray* lines = sfVertexArray_create();
    sfVertexArray_setPrimitiveType(lines, sfLinesStrip);
    while (sfRenderWindow_isOpen(w)) {
        (sfRenderWindow_pollEvent(w, &event));
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(w);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfVector2i mouse = sfMouse_getPositionRenderWindow(w);
            sfVertex vertex = {mouse.x, mouse.y, sfWhite};
            sfVertexArray_append(lines, vertex);
        }
        sfRenderWindow_drawVertexArray(w, lines, NULL);
        sfRenderWindow_display(w);
    }
    sfVertexArray_destroy(lines);
    sfRenderWindow_destroy(w);
    return 0;
}
