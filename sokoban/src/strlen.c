/*
** EPITECH PROJECT, 2022
** all projetc
** File description:
** my_put
*/

#include <ncurses.h>

int  my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return (i);
}
