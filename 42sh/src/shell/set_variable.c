/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** set_variable
*/

#include "sh42.h"

int str_mod(char *tmp, int i, int j, char **arr)
{
    int k = 0;

    if (tmp != NULL) {
        for (int e = 0; tmp[e] != '\0'; e++)
            tmp[e] == ':' ? tmp[e] = ' ' : 0;
        arr[i] = realloc(arr[i], sizeof(char) * (my_strlen(arr[i]) +
        my_strlen(tmp) + 1));
        for (k = 0; tmp[k] != '\0'; k++)
            arr[i][j + k] = tmp[k];
        arr[i][j + k] = '\0';
        free(tmp);
        return 0;
    }
    return 1;
}

int list_var(char **arr, int i, int j, char **env)
{
    if (my_strcmp(&arr[i][j], "$path") == 0)
        return str_mod(my_search_in_env(env, PATH), i, j, arr);
    if (my_strcmp(arr[i], "$user") == 0)
        return str_mod(my_search_in_env(env, USER), i, j, arr);
    return 1;
}

int set_variable_two(char **arr, char **env, int i, int j)
{
    char *tmp = NULL;
    int k = 0;

    if (search_return_value(arr, i, j, tmp) == 0)
        return 0;
    tmp = my_search_in_env(env, &arr[i][j + 1]);
    if (tmp != NULL) {
        arr[i] = realloc(arr[i], sizeof(char) * (my_strlen(arr[i]) +
        my_strlen(tmp) + 1));
        for (k = 1; tmp[k] != '\0'; k++)
            arr[i][j + k - 1] = tmp[k];
        arr[i][j + k - 1] = '\0';
        free(tmp);
        return 0;
    } if (tmp == NULL && list_var(arr, i, j, env) == 1) {
        my_putstr_error(&arr[i][j + 1]);
        my_putstr_error(": Undefined variable.\n");
        return 1;
    }
    return 0;
}

char *return_variable(char **arr, char *arr_line, int value)
{
    if (value == 1) {
        my_free_array(arr);
        return_value(1);
        return NULL;
    }
    arr_line = my_array_to_str(arr, ' ');
    return_value(0);
    my_free_array(arr);
    return arr_line;
}

char *set_variable(char *arr_line, char **env)
{
    int i = 0;
    int value = 0;
    int value2 = 0;
    char **arr;

    arr_line = verif_quotes(arr_line, &value2);
    if (arr_line == NULL)
        return NULL;
    arr = my_str_to_word_array(arr_line, ' ');
    if (arr == NULL)
        return NULL;
    for (; arr[i] != NULL; i++)
        for (int j = 0; arr[i][j] != '\0'; j++)
            arr[i][j] == '$' && value2 == 0 ?
            value = set_variable_two(arr, env, i, j) : 0;
    return return_variable(arr, arr_line, value);
}
