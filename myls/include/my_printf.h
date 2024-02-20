/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** my_printf.h
*/

#ifndef MY_H_
    #define MY_H_
    #include <dirent.h>
    #include <pwd.h>
    #include <grp.h>
    #include <sys/stat.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <time.h>
    #include <unistd.h>
    #include <stdarg.h>
    #include <errno.h>

    void print_perror(const char *s);
    void print_file(const char *file, const char *pf, const struct stat *stbuf);
    int compare(const void *a, const void *b);
    void print_directory(const char *dirname, int all);
    int my_printf ( const char *format , ...);
    void my_put_nbr(int nb);
    void my_putchar(char c);
    void my_putstr(char const *str);
    int my_strcmp(char const *s1, char const *s2);
    char *my_strcpy ( char * dest , char const * src );
    int my_strlen(char const *str);
    int octal(int decnum);
#endif
