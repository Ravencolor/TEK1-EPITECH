/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** my_execve_two
*/

#include "sh42.h"

int i_static(int nb)
{
    static int i = -1;

    if (nb == -1)
        return i;
    i = nb;
    return 0;
}

void exec_boucle(char **arr_line, char **arr_path, char **env, int i)
{
    char *res = NULL;

    if (arr_path[0] != NULL) {
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
        my_putstr_error(arr_line[0]);
        my_putstr_error(": Permission denied.\n");
    } else {
        my_putstr_error(arr_line[0]);
        my_putstr_error(": Command not found.\n");
        if (i != 1)
            my_free_array(arr_line);
    }
    exit (1);
}
