/*
** EPITECH PROJECT, 2023
** my_strdup.c
** File description:
** duplicate string and alloue memory
*/

#include "my.h"

char *my_strdup(const char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;
    char *duplicate = malloc(sizeof(char) * my_strlen(str) + 1);
    int i = 0;
    for (; str[i] != '\0'; i++) {
        duplicate[i] = str[i];
        duplicate[i + 1] = '\0';
    }
    return duplicate;
}
