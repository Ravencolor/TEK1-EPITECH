/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** strcat
*/

#include "my.h"

char *my_strcat(char *dest ,char *src)
{
    int i = 0, y = 0;

    if (*src == '\0')
        return NULL;
    if (*dest != '\0')
        for (; dest[i] != '\0'; i++);
    for (; src[y] != '\0'; y++, i++) {
        dest[i] = src[y];
    }
    dest[i] = '\0';
    return dest;
}
