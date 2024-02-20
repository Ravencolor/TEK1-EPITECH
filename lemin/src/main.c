/*
** EPITECH PROJECT, 2022
** all projetc
** File description:
** my_put
*/

#include "../include/my.h"
int main(void)
{
    char* line = NULL;
    size_t len = 0;
    ssize_t read;

    int num_ants;
    if ((read = getline(&line, &len, stdin)) != -1) {
        num_ants = my_atoi(line);
    } else {
        exit(EXIT_FAILURE);
    }

    my_printf("%d\n", num_ants);
    my_printf("# Moves will follow\n");

    return 0;
}
