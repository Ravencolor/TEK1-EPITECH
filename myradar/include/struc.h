/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** include struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct PARAMETRE {
        sfVideoMode m;
        sfRenderWindow* w;
        sfEvent event;
    }PARAMETRE_T;

    typedef struct IMG {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f scale;
        sfVector2f pos;
        sfVector2f size;
    }IMG_T;

    typedef struct GLOBAL {
        PARAMETRE_T s;
        IMG_T *pic;
    }GLOBAL_T;

#endif
