/*
** EPITECH PROJECT, 2023
** decompress_image
** File description:
** dsk
*/

#include "libmy.h"
#include "giantman.h"

int print_first_info(giantman_s *giantman)
{
    my_printf("%s\n", giantman->arr[0]);
    my_printf("%s\n", giantman->arr[1]);
    my_printf("%s\n", giantman->arr[2]);
    return 0;
}

int decompress_second_part(giantman_s *giantman, int i)
{
    for (int j = 1; giantman->arr[i][j] != '$'; j++) {
        giantman->number[j - 1] = giantman->arr[i][j];
    }
    for (int j = 0; j < my_getnbr(giantman->number); j++) {
        for (giantman->k = 1; giantman->arr[i][giantman->k] != '$';
        giantman->k++);
        for (int e = giantman->k + 1; giantman->arr[i][e] != '\0'; e++)
            my_putchar(giantman->arr[i][e]);
        my_putchar('\n');
    }
    return i;
}

int decompress_image(char *av, giantman_s *giantman, char *avv)
{
    giantman->buffer = my_open_file(av);
    if (giantman->buffer[1] == '\0')
        return 0;
    giantman->arr = my_str_to_word_array_mod(giantman->buffer);
    giantman->number = malloc(sizeof(char) * 100);
    giantman->k = 0;
    print_first_info(giantman);
    for (int i = 3; giantman->arr[i] != NULL; i++) {
        if (giantman->arr[i][0] == '$') {
            i = decompress_second_part(giantman, i);
        } else
            my_printf("%s\n", giantman->arr[i]);
        giantman->number = malloc(sizeof(char) * 100);
    }
    free(giantman->buffer);
    free(giantman->number);
    my_free_array(giantman->arr);
    return 0;
}
