/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** my_memcpy.c
*/

#include "sprintf.h"

void *my_memcpy_s(void *dest, const void *src, size_t n)
{
    char *str_dest = (char*)dest;
    char *str_src = (char*)src;

    int i = 0;
    for (; str_src[i] && i < n; i++)
        str_dest[i] = str_src[i];
    return dest;
}
