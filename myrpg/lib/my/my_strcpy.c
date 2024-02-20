/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** my_strcpy
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    if (*src == '\0' || src == NULL)
        return NULL;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
        dest[i] = '\0';
    }
    return dest;
}
