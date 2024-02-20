/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** shell of 42sh
*/

#include "sh42.h"
#include <time.h>

void execute_commands(char **env, char **arr_path, char **arr_line, char *line)
{
    char **arr_command = NULL, **arr;
    int and_status = have_and(line);
    int or_status = have_or(line);

    if (!(arr_line = my_str_to_word_array(line, POINV)))
        return;
    clean_arr(arr_line);
    for (int i = 0; arr_line[i] != NULL; i++) {
        if (!(arr_command = my_str_to_word_array(arr_line[i], ' ')))
            continue;
        arr = verif_marks(arr_command);
        if (fonction(env, arr, arr_path) == 0 ||
        (return_value(-1) == 0 && or_status > 0 && i != 0)) {
            my_free_array(arr_command);
            continue;
        } if (return_value(-1) != 0 && and_status > 0 && i != 0)
            break;
        my_execve(arr, arr_path, env);
        my_free(2, arr, STRING_ARRAY, arr_command, STRING_ARRAY);
    }
}

void boucle_shell(char **env, char **arr_path, double *temps_ecoule, int t)
{
    char *line;
    char **arr_line = NULL;
    clock_t debut, fin;

    debut = clock();
    isatty(0) ? my_prompt(env, *temps_ecoule, t) : 0;
    line = my_get_line(arr_path, env);
    if (line == NULL)
        return;
    if (line[0] != '\0')
        add_history(line);
    execute_commands(env, arr_path, arr_line, line);
    fin = clock();
    *temps_ecoule = ((double) (fin - debut)) / CLOCKS_PER_SEC;
    my_free(2, arr_line, STRING_ARRAY, line, STRING);
}

void shell(char **env, int t)
{
    char *path;
    char **arr_path = NULL;
    double temps_ecoule;

    path = my_search_in_env(env, PATH);
    if (path != NULL)
        arr_path = my_str_to_word_array(path, ':');
    free(path);
    while (1)
        boucle_shell(env, arr_path, &temps_ecoule, t);
    my_free_array(arr_path);
}
