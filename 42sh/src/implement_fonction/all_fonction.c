/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** fonction
*/

#include "sh42.h"

int my_exit(char **arr_line, char **arr_path)
{
    isatty(0) ? my_printf("exit\n") : 0;
    my_free_array(arr_line);
    my_free_array(arr_path);

    exit(return_value(-1));
}

int fonction(char **env, char **arr_line, char **arr_path)
{
    if (env[0] == NULL)
        return 0;
    if (my_strcmp(arr_line[0], "cd") == 0)
        return my_cd(env, arr_line);
    if (my_strcmp(arr_line[0], "setenv") == 0)
        return my_setenv(env, arr_line);
    if (my_strcmp(arr_line[0], "unsetenv") == 0)
        return my_unsetenv(env, arr_line);
    if (my_strcmp(arr_line[0], "alias") == 0)
        return my_alias_create(arr_line);
    if (my_strcmp(arr_line[0], "unalias") == 0)
        return my_unalias(arr_line);
    if (my_strcmp(arr_line[0], "echo") == 0)
        return my_echo(arr_line);
    if (my_strcmp(arr_line[0], "exit") == 0)
        return my_exit(arr_line, arr_path);
    if (my_strcmp(arr_line[0], "history") == 0)
        return my_print_history(arr_line);
    return allias(env, arr_line, arr_path);
}
