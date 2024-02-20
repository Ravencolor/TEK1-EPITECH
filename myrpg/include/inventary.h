/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** inventary.h
*/

#ifndef _INVENTARY_H_
    #define _INVENTARY_H_
    #include "csfml.h"

    typedef struct inv_s {
        sfRectangleShape *squar;
        sfVector2f pos;
        struct inv_s *next;
    } inv_s;

    inv_s *create_link_squar(inv_s* inv);
    inv_s *init_case(void);
    void display_inv(inv_s *inv, game *win);
    void call_invatary_functions(game *win, inv_s *inv);
    int how_many_node(inv_s *inv);
    sfVector2f get_pos_case_inv(inv_s *inv, int loop);

#endif /* _INVENTARY_H_ */
