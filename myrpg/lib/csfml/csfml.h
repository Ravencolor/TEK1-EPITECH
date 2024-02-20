/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** csfml.h
*/

#ifndef _CSFML_H_
    #define _CSFML_H_

    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>

    sfSound *create_sound(char *path);
    sfSprite *create_sprite(char *name, const sfIntRect *area);
    sfRenderWindow *create_window(int x, int y);
    sfText *create_text(char *contenu, sfVector2f pos, int weight, sfColor);
    sfText *create_text_grass(char **str, sfVector2f pos, int wei[2], sfColor);
    void *set_text_middle_origine(sfText *text);
    void *set_sprite_middle_origine(sfSprite *sprite);
    sfRectangleShape *create_rectangle(sfVector2f pos, sfVector2f size);
    void *set_rect_middle_origine(sfRectangleShape *rect);
    sfSprite *create_items(char *pathfile);
    sfMusic *create_music(const char *pathfile);
    sfSprite *get_case_tilesheet(int box);
    sfView *create_view(sfRenderWindow *window);
    sfRenderWindow *create_window_fullscreen(int x, int y);
    void display_case_tilesheet(int box, sfRenderWindow *window, char *path);
    int is_colision_hero_items(sfSprite *sprite1, sfRectangleShape *sprite2);
    void create_queste(sfRenderWindow *window, char *title_quest, char *quest);

#endif /* _CSFML_H_ */
