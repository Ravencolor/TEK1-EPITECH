/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** my_pipes_two
*/

#include "sh42.h"

void do_the_pipe_two(pipe_t *pip, char **arr_line, char **arr_path, char **env)
{
    if (pip->pid < 0)
        exit(EXIT_FAILURE);
    if (pip->pid == 0) {
        if (pip->pipe_index > 0 && dup2(pip->pipes[(pip->pipe_index - 1) * 2],
        STDIN_FILENO) < 0) {
            perror("dup2");
            exit(EXIT_FAILURE);
        }
        if (dup2(pip->pipes[pip->pipe_index * 2 + 1], STDOUT_FILENO) < 0) {
            perror("dup2");
            exit(EXIT_FAILURE);
        }
        for (pip->i = 0; pip->i < pip->num_pipes * 2; pip->i++)
            close(pip->pipes[pip->i]);
        exec_ve(&arr_line[pip->cmd_start], arr_path, env, 1);
    } else {
        pip->cmd_start = pip->cmd_end + 1;
        pip->pipe_index++;
    }
}

void do_the_pipe(pipe_t *pip, char **arr_line, char **arr_path, char **env)
{
    if (my_strcmp(arr_line[pip->cmd_end], "|") == 0) {
        arr_line[pip->cmd_end] = NULL;
        pip->pid = fork();
        do_the_pipe_two(pip, arr_line, arr_path, env);
    }
    pip->cmd_end++;
}

void first_part_pipes(pipe_t *pip, char **arr_line)
{
    while (arr_line[pip->i] != NULL) {
        if (my_strcmp(arr_line[pip->i], "|") == 0)
            pip->num_pipes++;
        pip->i++;
    }
    pip->pipes = (int *) malloc(2 * pip->num_pipes * sizeof(int));
    for (pip->i = 0; pip->i < pip->num_pipes; pip->i++) {
        if (pipe(pip->pipes + pip->i * 2) < 0) {
            perror("pipe");
            exit(EXIT_FAILURE);
        }
    }
}
