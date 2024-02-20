/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** prompt
*/

#include "sh42.h"

int first_part_prompt(char **env)
{
    char *name;

    if (env[0] == NULL) {
        my_printf("> ");
        return 1;
    }
    if (return_value(-1) == 0)
        my_printf("%s$ ", GREEN);
    else
        my_printf("%s$[%d] ", RED, return_value(-1));
    name = my_search_in_env(env, USER);
    if (name != NULL)
        my_printf("%s%s%s", BLUE, name, NORMAL);
    free(name);
    return 0;
}

void my_prompt_two(char *pwd, float time, int t)
{
    int len = my_strlen(pwd);
    int i = 0;
    int o = 0;

    for (i = 0; pwd[i] != '\0'; i++)
        pwd[i] == '/' ? o++ : 0;
    if (o == 2)
        my_printf(":~");
    else {
        i = len;
        for (; pwd[i] != '/'; i--);
        my_printf("%s:%s %s", CYAN, &pwd[i], NORMAL);
    }
    if (t == 1)
        my_printf("%s(t:%f)%s > %s", GREEN, time, WHITHE, NORMAL);
    else
        my_printf("%s> %s", WHITHE, NORMAL);
    free(pwd);
}

void my_prompt(char **env, float time, int t)
{
    char *pwd;

    if (first_part_prompt(env) == 1 ||
    !(pwd = my_search_in_env(env, PWD)))
        return;
    if (pwd[0] == '\0') {
        my_printf(":~> ");
        return;
    }
    my_prompt_two(pwd, time, t);
}
