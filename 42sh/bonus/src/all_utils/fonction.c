/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** fonction
*/

#include "sh42.h"

char *transfer_in_maj(char *str)
{
    char *tmp = NULL;
    int all = 0;

    tmp = my_strdup(str);
    for (int i = 0; tmp[i] != '\0'; i++)
        if (tmp[i] >= 'A' && tmp[i] <= 'Z')
            all++;
    if (all == my_strlen(tmp) || all != 0)
        return tmp;
    for (int i = 0; tmp[i] != '\0'; i++)
        if (tmp[i] >= 'a' && tmp[i] <= 'z')
            tmp[i] = tmp[i] - 32;
    return tmp;
}

void clean_arr(char **arr_line)
{
    int i = 0;
    int j = 0;
    int o = 0;

    for (; arr_line[i] != NULL; i++) {
        for (j = 0; arr_line[i][j] == ' '; j++);
        for (o = 0; arr_line[i][j] != '\0'; j++, o++)
            arr_line[i][o] = arr_line[i][j];
        arr_line[i][o] = '\0';
    }
}

void my_putstr_error(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(2, &str[i], 1);
}

int is_in_maj(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            return 1;
    return 0;
}
