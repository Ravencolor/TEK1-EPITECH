/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** my_array_to_str
*/

#include "sh42.h"

char *my_array_to_str(char **arr, char c)
{
    char *str = NULL;
    int i = 0;
    int j = 0;
    int k = 0;

    for (; arr[i] != NULL; i++)
        for (j = 0; arr[i][j] != '\0'; j++, k++);
    str = malloc(sizeof(char) * (k + i));
    for (i = 0, k = 0; arr[i] != NULL; i++) {
        for (j = 0; arr[i][j] != '\0'; j++, k++)
            str[k] = arr[i][j];
        str[k] = c;
        k++;
    }
    str[k - 1] = '\0';
    return str;
}
