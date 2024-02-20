/*
** EPITECH PROJECT, 2022
** flag_part2
** File description:
** dsk
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <stdarg.h>
    #include <unistd.h>
    #include <stdlib.h>

    int my_printf ( const char *format , ...);
    int my_put_nbr(int nb);
    void my_putchar(char c);
    int my_putstr(char const *str);
    char *my_strcpy ( char * dest , char const * src );
    int octal(int decnum);

#endif