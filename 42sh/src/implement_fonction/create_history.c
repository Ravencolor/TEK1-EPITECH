/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** create_history
*/

#include "sh42.h"

int open_history_two(history_t *history, int i, char **arr)
{
    if (i > 0) {
        if (!(arr = my_str_to_word_array(history->arr_history[i - 1], '^')) ||
        arr[2] == NULL)
            return -1;
        if (arr[0] != NULL)
            history->last_number = my_getnbr(arr[0]);
        if (arr[2] != NULL)
            history->last_command = my_strdup(arr[2]);
    } else
        history->arr_history = NULL;
    my_free_array(arr);
    return 0;
}

int open_history(history_t *history)
{
    char **arr = NULL;
    int i = 0;
    char *histo;
    history->last_command = NULL;

    if (!(histo = my_open_file("/tmp/history")))
        return -1;
    history->arr_history = my_str_to_word_array(histo, '\n');
    for (;history->arr_history[i] != NULL; i++);
    history->last_number = 0;
    if (open_history_two(history, i, arr) == -1)
        return -1;
    free(histo);
    return i;
}

void all_free(history_t *history)
{
    if (history->arr_history != NULL)
        my_free_array(history->arr_history);
    if (history->time != NULL)
        free(history->time);
    if (history->last_command != NULL)
        free(history->last_command);
    free(history);
}

void print_in_file_two(history_t *history, const char *arr_line, int fd, int n)
{
    char *number = NULL;

    number = my_itoa(n + 1);
    write(fd, number, my_strlen(number));
    free(number);
    write(fd, "^", 1);
    write(fd, history->time, my_strlen(history->time));
    write(fd, "^", 1);
    write(fd, arr_line, my_strlen(arr_line));
    write(fd, "\n", 1);
}

void print_in_file(history_t *history, const char *arr_line, int i, int fd)
{
    static int number2 = 0;

    if (history->last_number > number2)
        number2 = history->last_number;
    else
        number2 = 0;
    if (my_strcmp(history->last_command, arr_line) == 0) {
        if (history->arr_history[i - 1] != NULL) {
            free(history->arr_history[i - 1]);
            history->arr_history[i - 1] = NULL;
        }
    }
    if (history->arr_history != NULL)
        for (int j = 0; history->arr_history[j] != NULL; j++) {
            write(fd, history->arr_history[j],
            my_strlen(history->arr_history[j]));
            write(fd, "\n", 1);
        }
    print_in_file_two(history, arr_line, fd, number2);
    close(fd);
}
