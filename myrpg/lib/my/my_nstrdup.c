/*
** EPITECH PROJECT, 2023
** my_nstrdup.c
** File description:
** other function in local
*/

#include "my.h"

char *my_nstrdup(char *s1, char *s2)
{
    int size = my_strlen(s1) + my_strlen(s2), i;
    char *str = malloc(sizeof(char) * (size + 1));
    for (i = 0; s1[i] != '\0'; i++) {
        str[i] = s1[i];
    }
    for (int a = 0; s2[a] != '\0'; i++, a++) {
        str[i] = s2[a];
    }
    return str;
}
