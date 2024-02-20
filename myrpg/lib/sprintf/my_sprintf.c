/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** my_sprintf.c
*/

#include "sprintf.h"
#include <ctype.h>


void string(char *str, char *format, va_list va)
{
    char* x = va_arg(va, char*);
    if (x == NULL)
        return;

    int i = end_string(str);
    for (int a = 0; x[a] != '\0'; a++, i++) {
        str[i] = x[a];
    }
    str[i] = '\0';
    return;
}

int how_many_integer(int integer)
{
    if (integer == 0) return 1;
    int nb = 0;
    while (integer > 0) {
        nb++;
        integer /= 10;
    }
    return nb;
}

void integer(char *str, char *format, va_list va)
{
    int x = va_arg(va, int);
    int nb = how_many_integer(x);
    int i = 0, a = 0;
    i = end_string(str);
    for (; a < nb;) {
        if (x > 99 && x < 1000) {
            str[i] = ('0' + (x / 100)); a++; i++;
            str[i] = ('0' + (x / 10) % 10); a++; i++;
            str[i] = ('0' + (x % 10));
        }
        if (x > 9 && x < 100) {
            str[i] = ('0' + (x / 10)); a++; i++;
            str[i] = ('0' + (x % 10));
        } if (x <= 9)
            str[i] = ('0' + x);
        x /= 10; a++; i++;
    }
    str[i] = '\0';
}

void my_sprintf(char *str, char *format, ...)
{
    va_list va; va_start(va, format);
    int i = 0, a = 0; str[0] = '\0';
    while (format[i]) {
        if (format[i] == '%' && format[i + 1] == 's') {
            string(str, format, va);
        } if (format[i] == '%' && format[i + 1] == 'd') {
            integer(str, format, va);
        } else {
            write_text(str, format, i);
        }
        i++;
    }
    va_end(va);
}
