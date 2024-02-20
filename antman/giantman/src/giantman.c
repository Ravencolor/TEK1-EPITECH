/*
** EPITECH PROJECT, 2023
** giantman
** File description:
** dsk
*/

#include "libmy.h"
#include "giantman.h"

int main(int ac, char **av)
{
    giantman_s giantman;
    if (ac == 1)
        return error(1);
    if (verif_number(av) == 84)
        return 84;
    if (is_directory(av[1]) == 1)
        return error(3);
    char *buffer = my_open_file(av[1]);
    if (buffer == NULL)
        return error(2);
    free(buffer);
    if (my_getnbr(av[2]) == 1 || my_getnbr(av[2]) == 2)
        return read_compress_file(av[1], &giantman, av[2]);
    if (my_getnbr(av[2]) == 3)
        return decompress_image(av[1], &giantman, av[2]);
    return 0;
}
