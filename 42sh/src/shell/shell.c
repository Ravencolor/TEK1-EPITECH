/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** shell of 42sh
*/

#include "sh42.h"

int execute_commands_two(char **env, char **arr_path, shell_t *shell)
{
    shell->tmp2 = set_variable(shell->arr_line[shell->i], env);
    shell->tmp = globbing(shell->tmp2);
    free(shell->tmp2);
    if (!(shell->arr_command = my_str_to_word_array(shell->tmp, ' ')))
        return 0;
    free(shell->tmp);
    if (fonction(env, shell->arr_command, arr_path) == 0 ||
    (return_value(-1) == 0 && shell->or_status > 0 && shell->i != 0)) {
        return 0;
    } if (return_value(-1) != 0 && shell->and_status > 0 && shell->i != 0)
        return 1;
    my_execve(shell->arr_command, arr_path, env);
    my_free_array(shell->arr_command);
    return 0;
}

void execute_commands(char **env, char **arr_path, char *line)
{
    shell_t *shell = malloc(sizeof(shell_t));
    shell->arr_command = NULL;
    shell->and_status = have_and(line);
    shell->or_status = have_or(line);
    shell->arr_line = NULL;
    shell->tmp = NULL;
    shell->tmp2 = NULL;

    if (!(shell->arr_line = my_str_to_word_array(line, POINV)))
        return;
    clean_arr(shell->arr_line);
    for (shell->i = 0; shell->arr_line[shell->i] != NULL; shell->i++) {
        if (execute_commands_two(env, arr_path, shell) == 1)
            break;
    }
    my_free_array(shell->arr_line);
    free(shell);
}

void boucle_shell(char **env, char **arr_path)
{
    char *line = NULL;

    isatty(0) ? my_prompt(env) : 0;
    line = my_get_line(arr_path, env);
    if (line == NULL)
        return;
    if (line[0] != '\0')
        add_history(line);
    execute_commands(env, arr_path, line);
    free(line);
}

void shell(char **env)
{
    char *path;
    char **arr_path = NULL;

    path = my_search_in_env(env, PATH);
    if (path != NULL)
        arr_path = my_str_to_word_array(path, ':');
    free(path);
    while (1)
        boucle_shell(env, arr_path);
    my_free_array(arr_path);
}
