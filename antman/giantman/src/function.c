/*
** EPITECH PROJECT, 2023
** function
** File description:
** dsk
*/

#include "libmy.h"
#include "giantman.h"

int error(int i)
{
    if (i == 0)
        my_printf("Error: error arguments");
    if (i == 1)
        my_printf("Error: error number");
    if (i == 3)
        my_printf("Error: is a directory");
    return 84;
}

int my_strshr(char *str, char char_find)
{
    int i = 0;
    for (; str[i] != '\0'; i++) {
        if (str[i] == char_find)
            return i;
    }
    return 0;
}

int size_of_str(char *str)
{
    int i = 0;
    for (; str[i] != '\0'; i++);
    return i;
}

int verif_number(char **av)
{
    if (av[2] == NULL)
        return error(1);
    if (my_getnbr(av[2]) != 3 && my_getnbr(av[2]) != 2 && my_getnbr(av[2]) != 1)
        return error(1);
    return 0;
}

int is_directory(char *str)
{
    struct stat sb;
    stat(str, &sb);
    if (S_ISDIR(sb.st_mode))
        return 1;
    return 0;
}
