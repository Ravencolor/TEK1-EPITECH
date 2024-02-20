/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** mark_management
*/

#include "sh42.h"

int verif_marks_two(char **arr_command, char **arr, mark_t *mark)
{
    static_char(arr_command[mark->i][mark->j]);
    for (mark->j = 1; arr_command[mark->i][mark->j] !=
    static_char('r'); mark->j++, mark->l++)  {
        if (arr_command[mark->i][mark->j] == '\0') {
            arr[mark->k][mark->l++] = ' ';
            mark->j = 0;
            mark->i++;
        }
        if (arr_command[mark->i] == NULL) {
            return 1;
        }
        if (arr_command[mark->i][mark->j] == static_char('r'))
            break;
        arr[mark->k][mark->l] = arr_command[mark->i][mark->j];
    }
    arr[mark->k][mark->l] = '\0';
    mark->l = 0;
    return 0;
}

char **init_mark(char **arr, char **arr_command, mark_t *mark)
{
    arr = malloc(sizeof(char *) * (my_array_len(arr_command) + 1));

    if (arr == NULL)
        exit(84);
    mark->i = 0;
    mark->j = 0;
    mark->k = 0;
    mark->l = 0;
    return arr;
}

int boucle_mark(char **arr_command, char **arr, mark_t *mark)
{
    if (!(arr[mark->k] = malloc(sizeof(char) * (100))))
        exit(84);
    if (arr_command[mark->i][mark->j] == '"' ||
    arr_command[mark->i][mark->j] == '\'') {
        if (verif_marks_two(arr_command, arr, mark) == 1)
            return 1;
    } else
        arr[mark->k] = my_strcpy(arr[mark->k], arr_command[mark->i]);
    return 0;
}

char **verif_marks(char **arr_command)
{
    char **arr = NULL;
    mark_t *mark = malloc(sizeof(mark_t));

    if (mark == NULL)
        exit(84);
    arr = init_mark(arr, arr_command, mark);
    static_char(0);
    for (; arr_command[mark->i] != NULL; mark->i++, mark->k++) {
        if (boucle_mark(arr_command, arr, mark) == 1)
            break;
    }
    arr[mark->k] = NULL;
    free(mark);
    return arr;
}
