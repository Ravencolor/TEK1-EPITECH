/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** converct_char_int.c
*/

#include "my.h"

char *convect_in_char(int a)
{
    char *str = (char *)malloc(2 * sizeof(char));
    str[0] = a + 48;
    str[1] = '\0';
    return str;
}
