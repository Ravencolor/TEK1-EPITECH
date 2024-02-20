/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lib
*/

#include "../../include/my_include.h"
#include "my.h"

char **split_str(char *str, char *separator)
{
    int nb_word = how_many_in(str, separator);
    char *saveptr = NULL;
    char *token = strtok_r(str, separator, &saveptr);
    char **result = malloc(sizeof(char *) * (nb_word + 2));
    int i = 1;

    result[i - 1] = strdup(token);
    for (;(token = strtok_r(saveptr, separator, &saveptr)) != NULL; i++)
        result[i] = strdup(token);
    result[i] = NULL;
    return result;
}
