/*
** EPITECH PROJECT, 2023
** B-PSU-200-LIL-2-1-42sh-enzo.boron
** File description:
** globbing
*/

#include "sh42.h"

int globbing_error(glob_t *globbuf, char **arr, int i, char *str)
{
    int ret = 0;
    char *str2 = strchr(arr[i], '*');

    if (str2 == NULL)
        return 0;
    if (str2 != NULL) {
        ret = glob(arr[i], GLOB_TILDE, NULL, globbuf);
        if (ret != 0) {
            arr[i - 1] != NULL ? my_putstr_error(arr[i - 1]) :
            (my_putstr_error(arr[i]));
            my_putstr_error(": No match.\n");
            return_value(1);
            return 1;
        }
        str = my_array_to_str(globbuf->gl_pathv, '\n');
        arr[i] = my_strdup(str);
    }
    return 0;
}

char *globbing(char *arr_line)
{
    glob_t globbuf;
    char *str = NULL;
    char *str2 = NULL;
    char **arr = my_str_to_word_array(arr_line, ' ');

    if (arr == NULL)
        return arr_line;
    for (int i = 0; arr[i] != NULL; i++) {
        if (globbing_error(&globbuf, arr, i, str) == 1)
            return NULL;
    }
    str2 = my_array_to_str(arr, ' ');
    my_free_array(arr);
    free(str);
    return_value(0);
    return (str2);
}
