/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** fonction_two
*/

#include "sh42.h"

int count_pipe(char **arr_line)
{
    int num_pipes = 0;

    for (int i = 0; arr_line[i] != NULL; i++) {
        for (int j = 0; arr_line[i][j] != '\0'; j++)
            arr_line[i][j] == '|' ? num_pipes++ : 0;
    }
    return num_pipes;
}

void clean_string(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ':')
            str[i] = '^';
    }
}

char static_char(char c)
{
    static char save = 0;

    if (c != 'r')
        save = c;
    return save;
}

int have_and(char *line)
{
    int i = 0;
    int and_status = 0;

    for (; line[i] != '\0'; i++)
        if (line[i] == '&' && line[i + 1] == '&') {
            line[i] = POINV;
            line[i + 1] = ' ';
            i += 2;
            and_status += 1;
        }
    return and_status;
}

int have_or(char *line)
{
    int i = 0;
    int or_status = 0;

    for (; line[i] != '\0'; i++)
        if (line[i] == '|' && line[i + 1] == '|') {
            line[i] = POINV;
            line[i + 1] = ' ';
            i += 2;
            or_status += 1;
        }
    return or_status;
}
