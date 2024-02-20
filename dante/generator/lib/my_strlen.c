/*
** EPITECH PROJECT, 2022
** strlen
** File description:
** strlen
*/

#include "../includes/my.h"

int my_strlen(char const *str)
{
    int len;
    int *temp;

    temp = str;
    while (*temp != '\0') {
        temp++;
        len++;
    }
    return (len);
}
