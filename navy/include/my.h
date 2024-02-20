/*
** EPITECH PROJECT, 2022
** my_navy
** File description:
** point h
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <stdbool.h>

#ifndef MY_H_
    #define MY_H_

    int main(int ac, char **av);

    int my_getnbr(char *str);

    void my_putchar(char c);
    void my_putstr(char const *str);
    void my_put_nbr(int nb);
    int my_strlen(char const *str);

    int	navy(int ac, char **av, int i);
    char **map(void);

#endif
