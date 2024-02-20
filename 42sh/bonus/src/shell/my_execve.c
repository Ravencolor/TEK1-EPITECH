/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** execve
*/

#include "sh42.h"

void exec_boucle(char **arr_line, char **arr_path, char **env, int i)
{
    char *res;

    if (arr_path[1] != NULL) {
        res = my_strcat(arr_path[i], "/");
        res = my_strcat(res, arr_line[0]);
    }
    if (execve(res, arr_line, env) != -1 ||
    execve(arr_line[0], arr_line, env) != -1) {
        if (arr_path[1] != NULL)
            free(res);
        exit(0);
    }
}

int exec_ve(char **arr_line, char **arr_path, char **env, int i)
{
    struct stat st;
    int p = 0;

    if (arr_path == NULL) {
        if (execve(arr_line[0], arr_line, env) != -1)
            exit(0);
        exit(0);
    }
    for (p = 0; arr_path[p] != NULL; p++)
        exec_boucle(arr_line, arr_path, env, p);
    if (stat(arr_line[0], &st) == 0) {
        if (access(arr_line[0], R_OK) != 0 || access(arr_line[0], X_OK) != 0)
            my_printf("%s: Permission denied.\n", arr_line[0]);
    } else {
        my_putstr_error(arr_line[0]);
        my_putstr_error(": Command not found.\n");
        if (i != 1)
            my_free_array(arr_line);
    }
    exit (1);
}

void verif_exec(char **arr_line)
{
    if (my_strcmp(arr_line[0], "|") == 0 && arr_line[1] == NULL) {
        my_printf("Invalid null command.\n");
        exit (1);
    }
    if (my_strcmp(arr_line[0], "&") == 0)
        exit (0);
}

void exec(char **arr_line, char **arr_path, char **env, pid_t pid)
{
    char *outfile = NULL;
    int status = 0;

    verif_exec(arr_line);
    for (int i = 0; arr_line[i] != NULL; i++) {
        outfile = redirect(arr_line, &i);
        if (outfile != NULL)
            break;
    }
    simple_redirection(outfile);
    if (count_pipe(arr_line) == 0) {
        exec_ve(arr_line, arr_path, env, 0);
        waitpid(pid, &status, 0);
        return_value(WEXITSTATUS(status));
    } else {
        pipe_function(arr_line, arr_path, env);
    }
}

void my_execve(char **arr_line, char **arr_path, char **env)
{
    pid_t pid = fork();

    if (pid == 0)
        exec(arr_line, arr_path, env, pid);
    else
        segfault(pid);
}
