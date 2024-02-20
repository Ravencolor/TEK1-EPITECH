/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** include all
*/

#ifndef MY_H_
    #define MY_H_

    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/System/Clock.h>
    #include "struc.h"
    #include <stdlib.h>
    #include <stdio.h>

    #define sfCf sfTexture_createFromFile
    #define sfWc sfRenderWindow_create

    void my_putstr(char const *str);
    void game_function(sfRenderWindow* w, sfEvent event);
    void init (GLOBAL_T *a);
    void if_click(sfRenderWindow* w, sfEvent event);
    void wind (GLOBAL_T *a);
    int main (int ac, char **av);
    void init_window(GLOBAL_T *a);
    void init_sprite(GLOBAL_T *a);


#endif
