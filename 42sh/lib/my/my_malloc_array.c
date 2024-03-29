/*
** EPITECH PROJECT, 2022
** my_malloc_array
** File description:
** malloc a 2D array
*/

#include "libmy.h"

char **my_malloc_array(int nb_rows, int nb_cols)
{
    char **array = malloc(sizeof(char *) * (nb_rows + 1));

    if (array == NULL)
        return (NULL);
    for (int i = 0; i < nb_rows; i++) {
        array[i] = malloc(sizeof(char) * (nb_cols + 1));
        if (array[i] == NULL) {
            my_free_array(array);
            return (NULL);
        }
    }
    array[nb_rows] = NULL;
    return (array);
}
