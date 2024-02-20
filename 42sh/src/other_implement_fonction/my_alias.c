/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** alias
*/

#include "sh42.h"

int clear_alias_two(char **arr_alias, int i, int j)
{
    if (arr_alias[i][0] == '"') {
        for (j = 0; arr_alias[i][j] != '\0'; j++)
            arr_alias[i][j] = arr_alias[i][j + 1];
    }
    for (j = 0; arr_alias[i][j] != '\0'; j++) {
        if (arr_alias[i][j] == '"')
            arr_alias[i][j] = '\0';
    }
    return j;
}

void clear_alias(char **arr_alias)
{
    int j = 0;
    for (int i = 0; arr_alias[i] != NULL; i++)
        j = clear_alias_two(arr_alias, i, j);
}

int allias(char **env, char **arr_line, char **arr_path)
{
    char **arr_alias, **arr;
    char *str = my_open_file("/tmp/sh42rc");

    if (str == NULL ||
    !(arr = my_str_to_word_array(str, '\n')))
        return 1;
    for (int i = 0; arr[i] != NULL; i++) {
        if (!(arr_alias = my_str_to_word_array(arr[i], ' ')))
            return 1;
        clear_alias(arr_alias);
        if (arr_alias[0] != NULL && my_strcmp(arr_line[0], arr_alias[1]) == 0
        && my_strcmp(arr_alias[0], "alias") == 0 && arr_alias[2] != NULL) {
            my_execve(&arr_alias[2], arr_path, env);
            my_free(4, arr_line, STRING_ARRAY, arr, STRING_ARRAY,
            arr_alias, STRING_ARRAY, str, STRING);
            return 0;
        } my_free_array(arr_alias);
    }
    my_free(2, arr, STRING_ARRAY, str, STRING);
    return 1;
}
