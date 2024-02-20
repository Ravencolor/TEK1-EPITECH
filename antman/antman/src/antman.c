/*
** EPITECH PROJECT, 2023
** antman
** File description:
** dsk
*/

#include "libmy.h"
#include "antman.h"

int verif_number(char **av, antman_s *antman)
{
    if (av[2] == NULL)
        return error(1);
    if (my_getnbr(av[2]) != 3 && my_getnbr(av[2]) != 2 && my_getnbr(av[2]) != 1)
        return error(1);
    antman->numb = my_getnbr(av[2]);
    return 0;
}

int main (int ac, char **av)
{
    antman_s antman;
    antman.ac = ac;
    antman.av = av;
    if (ac == 1 || ac > 5)
        return error(1);
    char *buffer = my_open_file(av[1]);
    if (buffer == NULL)
        return error(2);
    free(buffer);
    if (is_directory(av[1]) == 1)
        return error(3);
    if (verif_number(av, &antman) == 84)
        return 84;
    if (my_getnbr(av[2]) == 1 || my_getnbr(av[2]) == 2)
        return compress_multiple_word(&antman);
    if (my_getnbr(av[2]) == 3)
        return compress_image(&antman);
    return 0;
}
