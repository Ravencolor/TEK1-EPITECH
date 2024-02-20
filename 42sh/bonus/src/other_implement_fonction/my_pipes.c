/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** pipes
*/

#include "sh42.h"

pipe_t *declare_pipes_struct(void)
{
    pipe_t *pip = malloc(sizeof(pipe_t));

    if (pip == NULL)
        exit(84);
    pip->num_pipes = 0;
    pip->ret_value = 0;
    pip->i = 0;
    pip->pipes = NULL;
    pip->cmd_start = 0;
    pip->cmd_end = 0;
    pip->pipe_index = 0;
    return (pip);
}

void last_pipes(pipe_t *pip, char **arr_line, char **arr_path, char **env)
{
    pip->pid = fork();
    if (pip->pid < 0) {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    if (pip->pid == 0) {
        if (pip->pipe_index > 0 && dup2(pip->pipes[(pip->pipe_index - 1) * 2],
        STDIN_FILENO) < 0) {
                perror("dup2");
                exit(EXIT_FAILURE);
        }
        for (pip->i = 0; pip->i < pip->num_pipes * 2; pip->i++)
            close(pip->pipes[pip->i]);
        exec_ve(&arr_line[pip->cmd_start], arr_path, env, 1);
    }
}

void close_and_wait(pipe_t *pip)
{
    int exit_status = 0;
    int status = 0;

    for (pip->i = 0; pip->i < pip->num_pipes * 2; pip->i++)
        close(pip->pipes[pip->i]);
    for (pip->i = 0; pip->i < pip->num_pipes + 1; pip->i++) {
        wait(&status);
        if (WIFEXITED(status)) {
            exit_status = WEXITSTATUS(status);
            exit_status != 0 ? pip->ret_value = exit_status
            : 0;
        } else
            pip->ret_value = 1;
    }
}

void pipe_function(char **arr_line, char **arr_path, char **env)
{
    pipe_t *pip = declare_pipes_struct();

    first_part_pipes(pip, arr_line);
    while (arr_line[pip->cmd_end] != NULL)
        do_the_pipe(pip, arr_line, arr_path, env);
    last_pipes(pip, arr_line, arr_path, env);
    close_and_wait(pip);
    free(pip->pipes);
    close(STDIN_FILENO);
    exit(pip->ret_value);
}
