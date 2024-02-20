/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** execve
*/

#include "sh42.h"

void verif_exec(char **arr_line)
{
    if (my_strcmp(arr_line[0], "|") == 0 && arr_line[1] == NULL) {
        my_printf("Invalid null command.\n");
        exit (1);
    }
    if (my_strcmp(arr_line[0], "&") == 0 && arr_line[1] == NULL)
        exit (0);
    if (my_strcmp(arr_line[0], "&") == 0 && arr_line[1] != NULL) {
        for (int i = 1; arr_line[i] != NULL; i++)
            arr_line[i - 1] = arr_line[i];
        arr_line[my_array_len(arr_line) - 1] = NULL;
    }
}

void error_redirection(char **arr_line, char *outfile, int i)
{
    if ((outfile != NULL && i == 0) || (my_strcmp(arr_line[0], "|") == 0 &&
    arr_line[1] != NULL && my_strcmp(arr_line[1], ">") == 0) ||
    (my_strcmp(arr_line[0], "&") == 0 && arr_line[1] != NULL &&
    my_strcmp(arr_line[1], ">") == 0)) {
        my_putstr_error("Invalid null command.\n");
        exit(1);
    }
    if (i_static(-1) != -1 && outfile == NULL) {
        my_putstr_error("Missing name for redirect.\n");
        exit(1);
    }
}

void exec(char **arr_line, char **arr_path, char **env, pid_t pid)
{
    char *outfile = NULL;
    int status = 0;

    for (int i = 0; arr_line[i] != NULL; i++) {
        outfile = redirect(arr_line, &i);
        error_redirection(arr_line, outfile, i);
        if (outfile != NULL)
            break;
    }
    verif_exec(arr_line);
    simple_redirection(outfile);
    if (count_pipe(arr_line) == 0) {
        exec_ve(arr_line, arr_path, env, 0);
        waitpid(pid, &status, 0);
        return_value(WEXITSTATUS(status));
    } else
        pipe_function(arr_line, arr_path, env);
}

void my_execve(char **arr_line, char **arr_path, char **env)
{
    pid_t pid = fork();

    if (pid == 0)
        exec(arr_line, arr_path, env, pid);
    else
        segfault(pid);
}
