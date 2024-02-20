/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** bsq.h
*/
#ifndef __BSQ_H__
#define __BSQ_H__

#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>

int my_putstr(char const *str);
void my_putchar(char c);
int my_lines(char *buff);
int error(char *buff);
int valid_file(char *buff);
int my_strlen(char const *str);

#define ERROR_ARG "This proram must take only the path to the file\n"
#define ERROR_FILE "this file is not valid\n"
#define ERROR_OPEN "could not open file\n"

#endif