/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** my_setenv_two
*/

#include "sh42.h"

int the_arg_available(char **env, char **arr_line)
{
    int were_is_the = 0;
    char *str = NULL;
    int len_str = 0;

    were_is_the = were_is_the_path(env, arr_line[1]);
    str = my_strdup(arr_line[1]);
    len_str = my_strlen(str);
    my_strcpy(env[were_is_the], str);
    env[were_is_the][len_str] = '=';
    if (arr_line[2] != NULL) {
        for (int k = 0; arr_line[2][k] != '\0'; k++) {
            env[were_is_the][len_str + 1] = arr_line[2][k];
            len_str++;
        }
    }
    env[were_is_the][len_str + 1] = '\0';
    free(str);
    return_value(0);
    return 0;
}

int set_seconde_part(char **env, char **arr_line, int i, int j)
{
    if (arr_line[2] != NULL) {
        free(env[i]);
        env[i] = malloc(sizeof(char) * (j + 100));
        my_strcpy(env[i], arr_line[1]);
        env[i][j] = '=';
        for (int k = 0; arr_line[2][k] != '\0'; k++) {
            env[i][j + 1] = arr_line[2][k];
            j++;
        }
    }
    return j;
}

int the_arg_anvailable(char **env, char **arr_line)
{
    int i = 0;
    int j = my_strlen(arr_line[1]);

    for (i = 0; env[i] != NULL; i++);
    free(env[i]);
    env[i] = malloc(sizeof(char) * (j + 100));
    my_strcpy(env[i], arr_line[1]);
    env[i][j] = '=';
    j = set_seconde_part(env, arr_line, i, j);
    env[i][j + 1] = '\0';
    env[i + 1] = NULL;
    return_value(0);
    return 0;
}
