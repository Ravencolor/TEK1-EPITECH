/*
** EPITECH PROJECT, 2023
** compress_part
** File description:
** dsk
*/

#include "libmy.h"
#include "antman.h"

int first_part(antman_s *antman, int i, int o)
{
    if (o == i)
        return 0;
    if (my_strcmp(antman->arr[i], antman->arr[o]) == 0) {
        if (o == 0) {
            antman->arr[i][0] = int_to_char(0);
            antman->arr[i][1] = '$';
            antman->arr[i][2] = '\0';
        } else {
            antman->arr[i] = my_itoa(o);
            antman->arr[i][my_nbrlen(o)] = '$';
        }
    }
    return 0;
}

int compress_multiple_word(antman_s *antman)
{
    antman->buffer = my_open_file(antman->av[1]);
    antman->arr = my_str_to_word_array(antman->buffer);
    for (int i = 0; antman->arr[i] != NULL; i++) {
        for (int o = i; o >= 0; o--) {
            first_part(antman, i, o);
        }
    }
    for (int i = 0; antman->arr[i] != NULL; i++) {
        my_printf("%s ", antman->arr[i]);
        free(antman->arr[i]);
    }
    free(antman->arr);
    free(antman->buffer);
    return 0;
}
