/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** main
*/

#include "../include/my.h"


int my_printf ( const char *format , ...)
{
    va_list ap;
    va_start(ap, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && format[i +1] == 's')
                my_putstr(va_arg(ap, char * ));
        if (format[i] == '%' && (format[i +1] == 'd' || format[i +1] == 'i'))
                my_put_nbr(va_arg(ap, int));
        if (format[i] == '%' && format[i +1] == 'c')
                my_putchar(va_arg(ap, int));
        if (format[i] == '%' && format[i +1] == 'o')
                octal(va_arg(ap, int));
        if (format[i] == '%' && format[i +1] == '%')
                my_putchar('%');
        if (format[i] != '%')
            my_putchar(format[i]);
        if (format[i] == '%')
            i++;
    }
    va_end(ap);
    return (0);
}
