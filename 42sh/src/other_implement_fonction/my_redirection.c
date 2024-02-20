/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** simple_redirection
*/

#include "sh42.h"

int anti_redirection(char *outfile)
{
    int fd = 0;

    if (i_static(-1) == 2 || i_static(-1) == 3) {
        fd = open(outfile, O_RDONLY);
        if (fd == -1) {
            my_putstr_error(outfile);
            my_putstr_error(": No such file or directory.\n");
            exit(1);
        }
        dup2(fd, STDIN_FILENO);
        close(fd);
        return 1;
    }
    return 0;
}

void simple_redirection(char *outfile)
{
    int fd = 0;

    if (outfile != NULL) {
        if (i_static(-1) == 0)
            fd = open(outfile, O_WRONLY | O_CREAT | O_TRUNC, 0644);
        if (i_static(-1) == 1)
            fd = open(outfile, O_WRONLY | O_CREAT | O_APPEND, 0644);
        if (anti_redirection(outfile) == 1)
            return;
        if (fd == -1) {
            perror("open");
            exit(1);
        }
        dup2(fd, STDOUT_FILENO);
        close(fd);
    }
    free(outfile);
}

char *out_declare(char **arr_line, int *i, char *out)
{
    out = arr_line[*i + 1] != NULL &&
    my_strcmp(arr_line[*i + 1], ">") != 0 &&
    my_strcmp(arr_line[*i + 1], ">>") != 0 &&
    my_strcmp(arr_line[*i + 1], "<") != 0 &&
    my_strcmp(arr_line[*i + 1], "<<") != 0 ? arr_line[*i + 1] : NULL;
    return out;
}

char *redirect_two(char **arr_line, int *i, char *out)
{
    if (my_strcmp(arr_line[*i], "<\0") == 0) {
        out = out_declare(arr_line, i, out);
        arr_line[*i] = NULL;
        i_static(2);
        return out;
    }
    if (my_strcmp(arr_line[*i], "<<\0") == 0) {
        out = out_declare(arr_line, i, out);
        arr_line[*i] = NULL;
        i_static(3);
        return out;
    }
    return NULL;
}

char *redirect(char **arr_line, int *i)
{
    char *out = NULL;

    if (my_strcmp(arr_line[*i], ">>\0") == 0) {
        out = out_declare(arr_line, i, out);
        arr_line[*i] = NULL;
        i_static(1);
        return out;
    }
    if (my_strcmp(arr_line[*i], ">\0") == 0) {
        out = out_declare(arr_line, i, out);
        arr_line[*i] = NULL;
        i_static(0);
        return out;
    }
    out = redirect_two(arr_line, i, out);
    if (out != NULL)
        return out;
    return NULL;
}
