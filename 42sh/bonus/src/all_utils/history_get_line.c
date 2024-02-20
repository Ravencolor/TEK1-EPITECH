/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** history_get_line
*/

#include "sh42.h"

char *get_history_two(int count, char **arr_his, char **arr, char *last)
{
    int i = 0;

    for (;arr_his[i] != NULL; i++);
    if (i > 0) {
        if (count > i || count < 0)
            return NULL;
        if (!(arr = my_str_to_word_array(arr_his[i - count], '^')) ||
        arr[2] == NULL) {
            my_free(2, arr, STRING_ARRAY, arr_his, STRING_ARRAY);
            return NULL;
        }
        if (arr[2] != NULL)
            last = my_strdup(arr[2]);
        my_free_array(arr);
    }
    my_free_array(arr_his);
    return last;
}

char *get_history(int count)
{
    char **arr = NULL;
    char *last = NULL;
    char **arr_his;
    char *histo;

    if (!(histo = my_open_file("/tmp/history")))
        return NULL;
    arr_his = my_str_to_word_array(histo, '\n');
    free(histo);
    if (arr_his == NULL)
        return NULL;
    last = get_history_two(count, arr_his, arr, last);
    return last;
}

char *move_up(history_get_line_t *histo, char *line)
{
    histo->count++;
    histo->tmp = get_history(histo->count);
    if (histo->tmp == NULL) {
        histo->count--;
        histo->continu = 1;
        return line;
    }
    for (int i = 0; i < histo->size; i++)
        my_printf("\b \b");
    line = my_strcpy(line, histo->tmp);
    histo->size = my_strlen(line);
    histo->d = 1;
    return line;
}

char *move_down(history_get_line_t *histo, char *line)
{
    histo->count--;
    histo->tmp = get_history(histo->count);
    if (histo->tmp == NULL) {
        histo->count = 0;
        for (int i = 0; i < histo->size; i++)
            my_printf("\b \b");
        line = my_strcpy(line, "");
        histo->size = 0;
        histo->continu = 1;
        return line;
    }
    for (int i = 0; i < histo->size; i++)
        my_printf("\b \b");
    line = my_strcpy(line, histo->tmp);
    histo->size = my_strlen(line);
    histo->d = 1;
    return line;
}

char *move_get(history_get_line_t *histo, char *line)
{
    histo->ch = getch_char();
    if (histo->ch == 27 && getch_char() == 91) {
        histo->ch = getch_char();
        if (histo->ch == 65)
            line = move_up(histo, line);
        if (histo->ch == 66)
            line = move_down(histo, line);
    }
    return line;
}
