/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** my_strstr.c
*/

#include "sprintf.h"

char *my_strstr_s(char *text, char *search)
{
    int i = 0, a = 1;
    int nb = my_strlen_s(search);
    char *ptr = NULL;

    for (; text[i] && search[a];) {
        if (text[i] == search[a]) {
            a++;
            i++;
        }
        if (text[i] != search[a] && a < nb) {
            a = 0;
            i++;
        }
    }
    i -= nb;
    if (a == nb)
        return &text[i];
}
