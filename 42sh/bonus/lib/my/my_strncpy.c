/*
** EPITECH PROJECT, 2023
** my_strncpy
** File description:
** my_strncpy
*/

#include "libmy.h"

char *my_strncpy(char *str, int n)
{
    char *dest = malloc(sizeof(char) * (n + 1));
    int i = 0;

    if (dest == NULL)
        return NULL;
    for (; i < n; i++)
        dest[i] = str[i];
    dest[i] = '\0';
    return dest;
}
