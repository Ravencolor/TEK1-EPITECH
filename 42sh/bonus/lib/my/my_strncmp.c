/*
** EPITECH PROJECT, 2023
** my_strncmp
** File description:
** compare two strings with n
*/

#include "libmy.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (s1 == NULL || s2 == NULL)
        return (1);
    while (s1[i] != '\0' && s2[i] != '\0' && i < n) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}
