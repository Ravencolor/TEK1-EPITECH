/*
** EPITECH PROJECT, 2023
** function.c
** File description:
** other function in local
*/

#include "my.h"

char *my_persostr(char *s1, char *s2, char *s3)
{
    int i = 0;
    int size = (my_strlen(s1) + my_strlen(s2) + my_strlen(s3));
    char *str = malloc(sizeof(char) * (size + 1));
    for (; s1[i] != '\0'; i++)
        str[i] = s1[i];
    for (int a = 0; s2[a] != '\0'; i++, a++)
        str[i] = s2[a];
    for (int a = 0; s3[a] != '\0'; i++, a++)
        str[i] = s3[a];
    str[i] = '\0';
    return str;
}
