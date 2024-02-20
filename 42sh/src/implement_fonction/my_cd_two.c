/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** my_cd_two
*/

#include "sh42.h"

int nbr_pass(int nouveauNombre)
{
    static int nombre = 0;
    if (nouveauNombre != 0) {
        nombre = nouveauNombre;
    }
    return nombre;
}

int my_setenv_cd(char **env, char *value, char *env_path)
{
    char path[4096];
    struct stat sb;
    int i = 0;
    int were_is_the = 0;

    if (chdir(value) != 0) {
        if (stat(value, &sb) == 0 && S_ISREG(sb.st_mode) == 1)
            return 2;
        return 1;
    }
    if (getcwd(path, sizeof(path)) == NULL)
        return 1;
    were_is_the = were_is_the_path(env, env_path);
    for (; env_path[i] != '\0'; i++);
    for (int o = 0; path[o] != '\0'; i++, o++)
        env[were_is_the][i] = path[o];
    env[were_is_the][i] = '\0';
    nbr_pass(1);
    return_value(0);
    return 0;
}

void cd_setenv_alter(char **env, char *str, char *str2)
{
    int i = 0;
    int o = 0;
    int were_is_the = were_is_the_path(env, str);
    for (; str[i] != '\0'; i++);
    for (; str2[o] != '\0'; i++, o++) {
        env[were_is_the][i] = str2[o];
    }
    env[were_is_the][i] = '\0';
}

int cd_drawn(char **env, char **arr_line)
{
    if (were_is_the_path(env, OLDPWD) == my_array_len(env))
        return 0;
    if (arr_line[1][1] != '\0' || arr_line[2] != NULL) {
        my_putstr_error("Usage: cd [-plvn][-|<dir>].\n");
        my_free_array(arr_line);
        return (0);
    }
    char *old_pwd = my_search_in_env(env, OLDPWD);
    char *pwd = my_search_in_env(env, PWD);
    if (my_strcmp(old_pwd, pwd) == 0 || nbr_pass(0) == 0) {
        my_putstr_error(": No such file or directory.\n");
        nbr_pass(1);
    } else {
        cd_setenv_alter(env, OLDPWD, pwd);
        cd_setenv_alter(env, PWD, old_pwd);
        chdir(old_pwd);
    }
    my_free(2, old_pwd, STRING, pwd, STRING);
    return 0;
}
