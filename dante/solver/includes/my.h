/*
** EPITECH PROJECT, 2023
** MY_H
** File description:
** MY_H
*/

#ifndef MY_H_
    #define MY_H_

    #include <sys/types.h>
    #include <sys/wait.h>
    #include <sys/stat.h>
    #include <dirent.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <string.h>
    #include <stdio.h>
    #include <fcntl.h>

void my_putchar(char c);
int	my_strcmp(char *s1, char *s2);
int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src);
int my_printf(const char *format, ...);
int my_put_nbr(int nb);
char *my_putfnbr(double num, int dec);
char *my_strcpy(char *dest, char *str);

#endif /* MY_H_ */
