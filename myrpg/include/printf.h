/*
** EPITECH PROJECT, 2022
** printf
** File description:
** printf.h
*/

#ifndef _PRINTF_H
    #define _PRINTF_H

    #include <stdarg.h>
    #include <unistd.h>

    typedef int (*ptr_integer)(int);
    typedef int (*ptr_double)(double);
    typedef int (*ptr_string)(char *);

    ptr_double init_array_double(ptr_double tab_double[256]);
    ptr_string init_array_string(ptr_string tab_string[256]);
    ptr_integer init_array_integer(ptr_integer tab_integer[256]);

    void my_adress_memory_print(void *a);

    int my_binary_print(int x);

    int my_double_print(double a);

    int my_octet_print(int x);
    int diviser(int nb, int a);
    void display_octal(int save[100], int i);

    int nothing(void);
    void my_printf(char *format, ...);

    int my_put_nbr_print(int nb);

    int my_put_usigned_print(int nb);

    int my_putchar_print(int a);

    void is_double(char *format, ptr_double *tab, va_list va, int i);
    void is_string(char *format, ptr_string *tab, va_list va, int i);
    void is_caractere(char *format, ptr_integer *tab, va_list va, int i);

    int verification(char letter);

    int my_putstr_print(char *str);

    int my_positive_nbr_print(int a);

    int my_hex_lower_print(int x);

    int puissance(long int x, int nb, int base);
    int display_hex(int nb, int plus);
    int big_hex(int d, int r, int x, int p);
    int my_hex_upper_print(int x);

#endif /* _PRINTF_H */
