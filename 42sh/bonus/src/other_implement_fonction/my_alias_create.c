/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** my_alias_create
*/

#include "sh42.h"

int usage(int i)
{
    if (i == 1) {
        char *str = my_open_file("/home/sh42rc");
        my_printf("%s\n", str);
        free(str);
    }
    if (i == 2)
        my_printf("unalias: Too few arguments.\n");
    return_value(0);
    return 0;
}

int my_alias_create(char **arr_line)
{
    int fd = 0;
    int i = 0;

    if (arr_line[1] == NULL)
        return usage(1);
    fd = open("/tmp/sh42rc", O_CREAT | O_WRONLY | O_APPEND, 0644);
    if (fd == -1)
        return 84;
    write(fd, "\n", 1);
    for (i = 0; arr_line[i] != NULL; i++) {
        write(fd, arr_line[i], my_strlen(arr_line[i]));
        if (i != my_array_len(arr_line) - 1)
            write(fd, " ", 1);
    }
    close(fd);
    return_value(0);
    return 0;
}

int detect_line(char **arr_line, char **arr, int i, int line)
{
    for (int j = 0; arr[i][j] != '\0'; j++) {
        if (arr[i][j] == ' ' && arr[i][j + 1] == arr_line[1][0] &&
        my_strncmp(&arr[i][j + 1], arr_line[1], my_strlen(arr_line[1])) == 0 &&
        arr[i][j + 1 + my_strlen(arr_line[1])] == ' ') {
            line = i;
            break;
        }
    }
    return line;
}

int rewrite_unalias(char **arr, int line)
{
    int fd;

    fd = open("/tmp/sh42rc", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd == -1)
        return 84;
    for (int i = 0; arr[i] != NULL; i++) {
        if (arr[i][0] == '\0')
            continue;
        if (i != line) {
            write(fd, arr[i], my_strlen(arr[i]));
            write(fd, "\n", 1);
        }
    }
    close(fd);
    return 0;
}

int my_unalias(char **arr_line)
{
    int line = 0;
    char *str;
    char **arr;

    if (arr_line[1] == NULL || arr_line[2] != NULL)
        return usage(2);
    str = my_open_file("/tmp/sh42rc");
    arr = my_str_to_word_array(str, '\n');
    free(str);
    for (int i = 0; arr[i] != NULL; i++)
        line = detect_line(arr_line, arr, i, line);
    rewrite_unalias(arr, line);
    my_free_array(arr);
    return_value(0);
    return 0;
}
