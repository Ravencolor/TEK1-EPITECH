/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** return_value
*/

#include "sh42.h"

int search_return_value(char **arr, int i, int j, char *tmp)
{
    if (arr[i][j + 1] == '?' && arr[i][j + 2] == '\0') {
        tmp = my_itoa(return_value(-1));
        arr[i] = my_strdup(tmp);
        free(tmp);
        return 0;
    }
    return 1;
}

int return_value(int nb)
{
    static int return_value = 0;

    if (nb != -1)
        return_value = nb;
    return return_value;
}
