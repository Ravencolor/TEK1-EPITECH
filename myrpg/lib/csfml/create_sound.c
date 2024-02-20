/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_sound.c
*/

#include "csfml.h"

sfSound *create_sound(char *path)
{
    sfSound *sound = sfSound_create();
    sfSoundBuffer *sound_buf = sfSoundBuffer_createFromFile(path);
    sfSound_setBuffer(sound, sound_buf);

    return sound;
}
