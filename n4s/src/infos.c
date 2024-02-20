/*
** EPITECH PROJECT, 2023
** info
** File description:
** info
*/

#include "../include/my_include.h"
#include "../include/need.h"
#include "../include/my.h"

char **info(void)
{
    char *buff = NULL;
    size_t n = 0;
    char **infos = NULL;
    char *temp;

    my_putstr(GET_LASER "\n");
    if (getline(&buff, &n, stdin) == 0)
        exit(84);
    temp = strdup(buff);
    infos = split_str(temp, SEPARATOR);
    free(temp);
    return infos;
}

void clean_stdin(void)
{
    char *buff = NULL;
    size_t n = 0;
    getline(&buff, &n, stdin);

    free(buff);
}
