/*
** EPITECH PROJECT, 2022
** t1d4
** File description:
** my_strdup
*/

#include <stdio.h>
int my_strlen (char const *str);

char *my_strdup(char const *src)
{
    int k = 0;
    chat *nstr = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[k] != '\0') {
        nstr[k] = src[k];
        k++;
    }
    nstr[k + 1] = '\0';
    return nstr;
}
