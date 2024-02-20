/*
** EPITECH PROJECT, 2022
** strcat
** File description:
** cat
*/

#include "../includes/my.h"

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i = 0;
    for (i; src[i] != '\0'; i++) {
        dest[len + i] = src[i];
    }
    return dest;
}
