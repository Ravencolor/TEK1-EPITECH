/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-enzo.boron
** File description:
** my_printf
*/

#include "printf.h"

int nothing(void)
{
    return 0;
}

void my_printf(char *format, ...)
{
    va_list va;
    va_start(va, format);
    ptr_integer tab_integer[256];
    ptr_double tab_double[256];
    ptr_string tab_string[256];
    init_array_string(tab_string);
    init_array_double(tab_double);
    init_array_integer(tab_integer);
    for (int i = 0; format[i] != '\0';) {
        if (format[i] == '%') {
            int v = verification(format[i + 1]);
            (v == 1) ? is_caractere(format, tab_integer, va, i) : nothing();
            (v == 2) ? is_double(format, tab_double, va, i) : nothing();
            (v == 3) ? is_string(format, tab_string, va, i) : nothing();
            i = i + 2;
        } else {
            my_putchar_print(format[i]);
            i = i + 1;
        }
    }
}
