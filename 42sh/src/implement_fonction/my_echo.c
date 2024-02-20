/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** my_echo
*/

#include "sh42.h"

char *detect_redirection_two(char **arr_line, int *redir, int i, char *outfile)
{
    if (my_strcmp(arr_line[i], ">") == 0) {
        if (arr_line[i + 1] == NULL) {
            my_putstr_error("Missing name for redirect.\n");
            return_value(1);
            return NULL;
        } else
            outfile = my_strdup(arr_line[i + 1]);
        *redir = 1;
        return outfile;
    } if (my_strcmp(arr_line[i], ">>") == 0) {
        if (arr_line[i + 1] == NULL) {
            my_putstr_error("Missing name for redirect.\n");
            return_value(1);
            return NULL;
        } else
            outfile = my_strdup(arr_line[i + 1]);
        *redir = 2;
        return outfile;
    }
    return NULL;
}

char *detect_redirection(char **arr_line, int *redir)
{
    char *outfile = NULL;
    int i = 0;

    for (i = 0; arr_line[i] != NULL; i++) {
        if ((outfile = detect_redirection_two(arr_line, redir, i, outfile))
        != NULL)
            break;
    }
    arr_line[i] = NULL;
    return outfile;
}

void my_echo_redirection(char **arr_line, char *outfile, int redir)
{
    int fd = 0;
    if (redir == 1)
        fd = open(outfile, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (redir == 2)
        fd = open(outfile, O_WRONLY | O_CREAT | O_APPEND, 0644);
    if (fd == -1) {
        perror("open");
        return;
    }
    for (int i = 1; arr_line[i] != NULL; i++) {
        if (arr_line[i + 1] == NULL)
            write(fd, arr_line[i], my_strlen(arr_line[i]));
        else {
            write(fd, arr_line[i], my_strlen(arr_line[i]));
            write(fd, " ", 1);
        }
    }
    write(fd, "\n", 1);
    close(fd);
    free(outfile);
}

int my_echo(char **arr_line)
{
    char *outfile = NULL;
    int redir = 0;

    outfile = detect_redirection(arr_line, &redir);
    if (outfile != NULL)
        my_echo_redirection(arr_line, outfile, redir);
    else {
        for (int i = 1; arr_line[i] != NULL; i++)
            arr_line[i + 1] == NULL ? my_printf("%s", arr_line[i]) :
            (my_printf("%s ", arr_line[i]));
        my_printf("\n");
    }
    return_value(0);
    return 0;
}
