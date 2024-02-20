/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** insert_char.c
*/

#include "sprintf.h"

void insert_char(char *str, char format, va_list va)
{
    char x = va_arg(va, int);
    int i = 0;
    for (; str[i] != '\0'; i++);
    str[i] = x;
    str[i + 1] = '\0';
}

void write_text(char *str, char *format, int i)
{
    if ((format[i] != '%' && format[i - 1] != '%')) {
        int a = end_string(str);
        str[a] = format[i];
        str[a + 1] = '\0';
    }

    return;
}
