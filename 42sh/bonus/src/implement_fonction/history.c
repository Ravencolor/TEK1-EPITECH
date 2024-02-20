/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** history
*/

#include "sh42.h"

void set_time(history_t *history)
{
    int hour;
    int min;
    history->time = malloc(sizeof(char) * 6);
    time_t currentTime;
    struct tm *localTime;

    if (history->time == NULL)
        return;
    time(&currentTime);
    localTime = localtime(&currentTime);
    hour = localTime->tm_hour;
    min = localTime->tm_min;
    history->time[0] = hour / 10 + '0';
    history->time[1] = hour % 10 + '0';
    history->time[2] = ':';
    history->time[3] = min / 10 + '0';
    history->time[4] = min % 10 + '0';
    history->time[5] = '\0';
}

void add_history(const char *arr_line)
{
    int i = 0;
    int fd = 0;
    history_t *history = malloc(sizeof(history_t));

    if (history == NULL)
        return;
    i = open_history(history);
    fd = open("/tmp/history", O_WRONLY | O_CREAT | O_TRUNC, 0666);
    if (fd == -1 || i == -1)
        return;
    set_time(history);
    print_in_file(history, arr_line, i, fd);
    all_free(history);
}

int my_print_history_error(char **arr_line, char *file)
{
    if (file == NULL) {
        my_putstr("history: No history file.\n");
        return_value(1);
        return 1;
    }
    if (arr_line[1] != NULL && arr_line[2] != NULL && arr_line[3] != NULL) {
        my_putstr("history: Too many arguments.\n");
        return_value(1);
        return 1;
    }
    return 0;
}

int clear_history(char **arr_line)
{
    if (my_strcmp(arr_line[1], "-c") == 0) {
        int fd = open("/tmp/history", O_WRONLY | O_CREAT | O_TRUNC, 0666);
        close(fd);
        return_value(0);
        return 1;
    }
    if (arr_line[1] != NULL) {
        my_putstr("history: Badly formed number.\n");
        return_value(1);
        return 1;
    }
    return 0;
}

int my_print_history(char **arr_line)
{
    char *file = NULL;
    file = my_open_file("/tmp/history");

    if (my_print_history_error(arr_line, file) == 1 ||
    clear_history(arr_line) == 1)
        return 0;
    for (int i = 0; file[i] != '\0'; i++) {
        if (file[i] == '^') {
            my_putchar('\t');
            i++;
        }
        my_putchar(file[i]);
    }
    free(file);
    return_value(0);
    return 0;
}
