/*
** EPITECH PROJECT, 2023
** len_array
** File description:
** len_array
*/

#include <stdlib.h>

int len_array(char **array)
{
    int i = 0;

    if (array == NULL)
        exit(84);
    for (; *array; array++)
        i++;
    return i;
}
