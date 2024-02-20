/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** desc
*/

#include <unistd.h>
#include "../include/my.h"

int main(int ac, char **av)
{
    GLOBAL_T a;
    const char *description = "My_Hunter is a graphic project from epitech.\n"
    "The program launches a game based on duck hunting, "
    "with custom sprites.\n";

    if (ac == 2)
        my_putstr(description);
    if (ac >= 3){
        write(2, "Error argument count", 21);
        return (84);
    }
    if (ac == 1){
        init(&a);
        wind(&a);
    }
    return 0;
}

void wind(GLOBAL_T *a)
{
    while (sfRenderWindow_isOpen(a->s.w)) {
        sfRenderWindow_clear(a->s.w, sfWhite);
        sfRenderWindow_drawSprite(a->s.w, a->pic[0].sprite, NULL);
        sfRenderWindow_drawSprite(a->s.w, a->pic[1].sprite, NULL);
        sfRenderWindow_display(a->s.w);
        sfRenderWindow_pollEvent(a->s.w, &(a->s.event));
        if (a->s.event.type == sfEvtClosed)
            sfRenderWindow_close(a->s.w);
        if_click(a->s.w, a->s.event);
    }
}

void if_click(sfRenderWindow* w, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(w);

    if (mouse.x >= 704 && mouse.x <= 1200 && mouse.y >= 167 && mouse.y <= 365) {
        if (event.type == sfEvtMouseButtonPressed)
            game_function(w, event);
    }
}
