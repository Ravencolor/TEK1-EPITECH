/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-samuel.pinault
** File description:
** my_strcpy.c
*/

#include "../includes/my.h"

char *my_strcpy(char *dest, char *str)
{
    int i = 0;
    while (str[i] != 0) {
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
