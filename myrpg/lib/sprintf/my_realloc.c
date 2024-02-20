/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** my_realloc.c
*/

#include "sprintf.h"

void *my_realloc(void *ptr, size_t size)
{
    char *str = (char*)ptr;
    char *save = malloc((size) * sizeof(char));
    my_memcpy_s(save, str, size);
    return str;
}
