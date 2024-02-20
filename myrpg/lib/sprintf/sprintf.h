/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** sprintf.h
*/

#ifndef _SPRINTF_H_
    #define _SPRINTF_H_
    #include <stdlib.h>
    #include <stdarg.h>
    #include <stdio.h>
    #include <unistd.h>

    typedef struct parcing_t {
        int glo;
        char *optarg;
    }parcing_t;

    void fill_str(char *str, size_t size);
    int my_getopt(int argc, char **argv, char *parcing, parcing_t *parse);
    void my_putchar_s(char a);
    void my_putnbr_s(int nb);
    void my_putstr_s(char *str);
    void *my_realloc(void *ptr, size_t size);
    void my_sprintf(char *str, char *format, ...);
    char **my_str_to_world_array_s(char *str);
    int my_strcmp_s(const char *s1, const char *s2);
    char *my_strdup_s(const char *s);
    int my_strlen_s(const char *str);
    int my_strncmp_s(const char *s1, const char *s2, int size);
    char *my_strstr_s(char *text, char *search);
    void *my_memcpy_s(void *dest, const void *src, size_t n);
    void init_parcing(parcing_t *pars);

    int end_string(char *str);

    int my_isprint(int c);

    void insert_char(char *str, char format, va_list va);
    void write_text(char *str, char *format, int i);

#endif /*_SPRINTF_H_*/
