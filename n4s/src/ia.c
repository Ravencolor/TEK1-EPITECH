/*
** EPITECH PROJECT, 2023
** ia
** File description:
** ia
*/

#include "my_include.h"
#include "../include/need.h"
#include "../include/my.h"

bool cleared_track(char **infos)
{
    if (len_array(infos) < STATUS)
        exit(84);
    if (!my_strcmp(infos[STATUS], "Track Cleared"))
        return true;
    return false;
}

void execute_cmd(char *cmd, char *sign, char *value)
{
    my_putstr(cmd);
    my_putstr(sign);
    my_putstr(value);
    my_putstr("\n");
    clean_stdin();
}

void free_array(char **arr)
{
    for (int i = 0; arr[i] != NULL; i++)
        free(arr[i]);
    free(arr);
}

int my_ia(void)
{
    char **infos;

    execute_cmd(START, "", "");
    while (1) {
        infos = info();
        if (cleared_track(infos)) {
            free_array(infos);
            break;
        }
        move(infos);
        free_array(infos);
    }
    execute_cmd(STOP, "", "");
    return 0;
}
