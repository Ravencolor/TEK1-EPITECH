/*
** EPITECH PROJECT, 2023
** function
** File description:
** dsk
*/

#include "libmy.h"
#include "antman.h"

int error(int i)
{
    if (i == 0)
        my_printf("Error: error arguments");
    if (i == 1)
        my_printf("Error: error number");
    if (i == 2)
        my_printf("Error: error file");
    if (i == 3)
        my_printf("Error: error the file is a directory");
    return 84;
}

int size_of_str(char *str)
{
    int i = 0;
    for (; str[i] != '\0'; i++);
    return i;
}

char int_to_char(int nb)
{
    return nb +'0';
}

int print_the_final(antman_s *antman)
{
    if (antman->numb == 1)
        my_printf("The compress file is a Text\n\n");
    if (antman->numb == 2)
        my_printf("The compress file is a HTML\n");
    if (antman->numb == 3)
        my_printf("The compress file is a Images\n");
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
