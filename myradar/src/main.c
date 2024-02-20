/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** desc
*/

#include <unistd.h>
#include "../include/my.h"

int main(int ac, char **av, char **en)
{
    GLOBAL_T a;
    const char *description = "My_Radar is a graphic project from epitech.\n"
    "The program launches a game based on duck hunting, "
    "with custom sprites.\n";

    if (en == 0)
        return (84);
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        my_putstr(description);
    else {
        init(&a);
        wind(&a);
    }
    return 0;
}

sfVector2f vector(int a, int b)
{
    sfVector2f vec;

    vec.x = a;
    vec.y = b;

    return vec;
}

sfCircleShape *create_circle(sfVector2f position, float radius)
{
    sfCircleShape *circle;
    circle = sfCircleShape_create();
    sfCircleShape_setRadius(circle, radius);
    sfCircleShape_setPosition(circle, position);
    sfCircleShape_setOutlineColor(circle, sfBlack);
    sfCircleShape_setOutlineThickness(circle, 3);
    sfCircleShape_setFillColor(circle, sfTransparent);

    return circle;
}

void wind(GLOBAL_T *a)
{
    while (sfRenderWindow_isOpen(a->s.w)) {
        sfRenderWindow_clear(a->s.w, sfWhite);
        sfRenderWindow_drawSprite(a->s.w, a->pic[0].sprite, NULL);
        sfRenderWindow_pollEvent(a->s.w, &(a->s.event));
        if (a->s.event.type == sfEvtClosed)
            sfRenderWindow_close(a->s.w);
        sfRenderWindow_drawCircleShape(a->s.w,
        create_circle(vector(200, 250),120), NULL);
        sfRenderWindow_display(a->s.w);
    }
}
