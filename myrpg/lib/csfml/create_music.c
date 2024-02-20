/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_music.c
*/

#include "csfml.h"

sfMusic *create_music(const char *pathfile)
{
    sfMusic *music = sfMusic_createFromFile(pathfile);
    sfMusic_play(music);
    return music;
}
