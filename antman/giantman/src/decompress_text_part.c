/*
** EPITECH PROJECT, 2023
** decompres_text
** File description:
** dsk
*/

#include "libmy.h"
#include "giantman.h"

int read_compress_file(char *av, giantman_s *giantman, char *avv)
{
    giantman->buffer = my_open_file(av);
    giantman->arr = my_str_to_word_array(giantman->buffer);
    if (my_getnbr(giantman->arr[0]) != my_getnbr(avv))
        return 84;
    for (int i = 0; giantman->arr[i] != NULL; i++) {
        if (my_strshr (giantman->arr[i], '$') != 0) {
            giantman->arr[i] = giantman->arr[my_getnbr(giantman->arr[i])];
        }
    }
    for (int i = 1; giantman->arr[i] != NULL; i++) {
        my_printf("%s ", giantman->arr[i]);
    }
    free(giantman->buffer);
    return 0;
}
