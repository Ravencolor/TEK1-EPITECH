/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** my_cd
*/

#include "sh42.h"

void display_error_cd(char **arr_line, int i)
{
    if (i == 1) {
        if (access(arr_line[1], F_OK) == 0)
            my_printf("%s: Permission denied.\n", arr_line[1]);
        else
            my_printf("%s: No such file or directory.\n", arr_line[1]);
        return_value(1);
    }
    if (i == 2) {
        my_printf("%s: Not a directory.\n", arr_line[1]);
        return_value(1);
    }
}

int my_cd_following_two(char **env, char **arr_line, int i)
{
    char *pwd = my_search_in_env(env, PWD);

    if (pwd == NULL)
        pwd = my_strdup(getcwd(NULL, 0));
    if (arr_line[1][0] == '-')
        return (cd_drawn(env, arr_line));
    if (were_is_the_path(env, OLDPWD) == my_array_len(env))
        my_setenv(env, (char *[]){"setenv", "OLDPWD", pwd, NULL});
    if (were_is_the_path(env, PWD) == my_array_len(env))
        my_setenv(env, (char *[]){"setenv", "PWD",
        my_search_in_env(env, OLDPWD), NULL});
    pwd = my_search_in_env(env, PWD);
    cd_setenv_alter(env, OLDPWD, pwd);
    i = my_setenv_cd(env, arr_line[1], PWD);
    display_error_cd(arr_line, i);
    my_free_array(arr_line);
    free(pwd);
    return (i);
}

int my_cd_following(char **env, char **arr_line)
{
    int i = 0;

    if (arr_line[2] != NULL && arr_line[1][0] != '-') {
        my_putstr_error("cd: Too many arguments.\n");
        my_free_array(arr_line);
        return (0);
    }
    if (arr_line[1] != NULL) {
        i = my_cd_following_two(env, arr_line, i);
        return (0);
    }
    return (0);
}

void cd_home(char **env, char **arr_line, char *home)
{
    struct stat sb;
    char *pwd = NULL;

    if (stat(home, &sb) == -1) {
        my_putstr_error("cd: Cannot access home directory.\n");
        my_free(2, home, STRING, arr_line, STRING_ARRAY);
        return;
    }
    if (were_is_the_path(env, OLDPWD) == my_array_len(env))
        my_setenv(env, (char *[]){"setenv", "OLDPWD",
        my_search_in_env(env, PWD), NULL});
    if (were_is_the_path(env, PWD) == my_array_len(env))
        my_setenv(env, (char *[]){"setenv", "PWD", home, NULL});
    pwd = my_search_in_env(env, PWD);
    if (pwd == NULL)
        pwd = getcwd(NULL, 0);
    cd_setenv_alter(env, OLDPWD, pwd);
    my_setenv_cd(env, home, PWD);
    nbr_pass(1);
    my_free(3, home, STRING, arr_line, STRING_ARRAY, pwd, STRING);
}

int my_cd(char **env, char **arr_line)
{
    char *home = NULL;

    if (arr_line[1] == NULL) {
        home = my_search_in_env(env, HOME);
        if (home == NULL) {
            my_printf("cd: No home directory.\n");
            free(home);
            return (0);
        }
        cd_home(env, arr_line, home);
        return (0);
    }
    return my_cd_following(env, arr_line);
}
