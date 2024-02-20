/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** inventary.c
*/

#include "../include/my_rpg.h"

inventary *create_node(inventary *inv, sfVector2f pos)
{
    inventary *node = malloc(sizeof(inventary));
    node->rect = create_rectangle(pos, (sfVector2f){50, 50});
    node->is_occuped = 1;
    node->next = NULL;
    if (inv == NULL) {
        return node;
    }
    inventary *loop = inv;
    while (loop->next != NULL) {
        loop = loop->next;
    }
    loop->next = node;
    return inv;
}

void init_inventary(elements *e)
{
    e->inv = NULL;
    sfVector2f pos = {1920 / 2 - (300), 950};
    for (int i = 0; i < 5; i++) {
        e->inv = create_node(e->inv, pos);
        pos.x += 100;
    }

    return;
}

void draw_inventary(elements *e)
{
    if (e->display_inventary == 1) return;
    inventary *loop = e->inv;
    while (loop != NULL) {
        sfRenderWindow_drawRectangleShape(e->win, loop->rect, NULL);
        loop = loop->next;
    }
    free(loop);
    return;
}
