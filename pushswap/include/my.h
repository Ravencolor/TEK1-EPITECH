/*
** EPITECH PROJECT, 2022
** push_swap
** File description:
** include all
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <stdarg.h>
    #include <unistd.h>
    #include <stdlib.h>

    void print_list(int *list, int size);
    void sort(int *l_a, int size);
    void sort2(int *l_a, int size);

    int my_printf ( const char *format , ...);
    int my_put_nbr(int nb);
    void my_putchar(char c);
    int my_putstr(char const *str);
    char *my_strcpy ( char * dest , char const * src );
    void my_swap(int *a, int *b);
    int octal(int decnum);


#endif
