/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-enzo.boron
** File description:
** send_argc
*/

#include "printf.h"

void is_caractere(char *format, ptr_integer *tab_integer, va_list va, int i)
{
    if (format[i] == '%' && format[i + 1] != '%') {
        int pos = format[i + 1];
        int x = va_arg(va, int);
        tab_integer[pos](x);
    }
    if (format[i] == '%' && format[i + 1] == '%') {
        my_putchar_print('%');
    }
}

void is_double(char *format, ptr_double *tab_double, va_list va, int i)
{
    if (format[i] == '%' && format[i + 1] != '%') {
        int pos = format[i + 1];
        double x = va_arg(va, double);
        tab_double[pos](x);
    }
    if (format[i] == '%' && format[i + 1] == '%') {
        my_putchar_print('%');
    }
}

void is_string(char *format, ptr_string *tab_string, va_list va, int i)
{
    if (format[i] == '%' && format[i + 1] != '%') {
        int pos = format[i + 1];
        void* x = va_arg(va, void*);
        tab_string[pos](x);
    }
    if (format[i] == '%' && format[i + 1] == '%') {
        my_putchar_print('%');
    }
}
