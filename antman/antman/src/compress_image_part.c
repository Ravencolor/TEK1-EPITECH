/*
** EPITECH PROJECT, 2023
** compress_image
** File description:
** dsk
*/

#include "libmy.h"
#include "antman.h"

void print_the_first_part(antman_s *antman)
{
    my_printf("%s\n", antman->arr[0]);
    my_printf("%s\n", antman->arr[1]);
    my_printf("%s\n", antman->arr[2]);
}

void seconf_part(antman_s *antman)
{
    for (antman->j = antman->i + 1; my_getnbr(antman->arr[antman->i]) ==
    my_getnbr(antman->arr[antman->j]); antman->j++) {
        if (antman->arr[antman->j + 1] == NULL) {
            antman->count++;
            break;
        }
        antman->count++;
    }
    antman->i = antman->i + (antman->count - 1);
}

int compress_image(antman_s *antman)
{
    antman->buffer = my_open_file(antman->av[1]);
    antman->arr = my_str_to_word_array_mod(antman->buffer);
    antman->j = 0;
    antman->count = 1;
    if (antman->arr[0] == NULL)
        return 0;
    print_the_first_part(antman);
    for (antman->i = 3; antman->arr[antman->i] != NULL; antman->i++) {
        antman->count = 1;
        if (antman->arr[antman->i + 1] != NULL) {
            seconf_part(antman);
        }
        if (antman->count == 1)
            my_printf("%s\n", antman->arr[antman->i]);
        else
            my_printf("$%d$%s\n", antman->count, antman->arr[antman->i]);
    }
    free(antman->buffer);
    my_free_array(antman->arr);
    return 0;
}
