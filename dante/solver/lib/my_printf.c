/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** mini_printf.c
*/
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "../includes/my.h"

int my_printflags2(char flag, va_list param, int len)
{
    if (flag == '%') {
        my_putchar('%');
        return 0;
    }
    if (flag == 'f') {
        my_putfnbr((double)va_arg(param, double), 100000);
        return 0;
    }
}

int my_printflags(char flag, va_list param, int len)
{
    if (flag == 'n')
        return len;
    if (flag == 'c') {
        my_putchar((char*)va_arg(param, char*));
        return 0;
    }
    if (flag == 's') {
        my_putstr((char*)va_arg(param, char*));
        return 0;
    }
    if (flag == 'i') {
        my_put_nbr((int)va_arg(param, int));
        return 0;
    }
    if (flag == 'd') {
        my_put_nbr((int)va_arg(param, int));
        return 0;
    }
    return my_printflags2(flag, param, len);
}

int is_flag(char c)
{
    char *flags = "csidnouxXpSbeEfFgGaA";
    int is_flag = 0;
    for (int i = 0; flags[i] != 0; i++)
        if (flags[i] == c)
            is_flag = 1;
    return is_flag;
}

int my_printf(const char *format, ...)
{
    va_list param; va_start(param, format);
    int i = 0, len = 0, returned_lenght = 0;
    do {
    if (format[i] != '%' && format[i] != '\\') {
        my_putchar(format[i++]);
        len++;
    }
    if (format[i] == '%') {
        if (is_flag(format[++i])) {
            returned_lenght = my_printflags(format[i++], param, len++);
        } else {
            i++;
            len += 2;
        }
    }
    }
    while (format[i] != 0); va_end(param); return returned_lenght;
}


/*
    if (flag == 'o')
        my_put_nbr((int)va_arg(param, int));
    if (flag == 'x')
        my_put_nbr((int)va_arg(param, int));
    if (flag == 'X')
        my_put_nbr((int)va_arg(param, int));
    if (flag == 'p') pointer
    if (flag == 'q') ???;
    my_printflags2(char flag, va_list param, int len);
}

void my_printflags2(char flag, va_list param, int len)
{
    if (flag == 'e') my_putfnbr ((double)va_arg(param, double));
    if (flag == 'E') my_putfnbr ((double)va_arg(param, double));
    if (flag == 'f') my_putfnbr ((double)va_arg(param, double));
    if (flag == 'F') my_putfnbr ((double)va_arg(param, double));
    if (flag == 'g') my_putfnbr ((double)va_arg(param, double));
    if (flag == 'G') my_putfnbr ((double)va_arg(param, double));
    if (flag == 'a') my_putfnbr ((double)va_arg(param, double));
    if (flag == 'A') my_putfnbr ((double)va_arg(param, double));
}
*/
