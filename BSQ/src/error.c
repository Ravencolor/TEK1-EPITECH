/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** error
*/

#include "../include/bsq.h"

int error(char *buffer)
{
    int nb;

    if (valid_file(buffer) == 84)
        return (84);
    nb = my_lines(buffer);
    if (correct_char_nb(buffer, nb) == 84)
        return (84);
    if (correct_nb_lines(buffer, nb) == 84)
        return (84);
    return (0);
}

int valid_file(char *buffer)
{
    int i = 0;

    while (buffer[i] != '\n') {
        if (buffer[i] >= '0' && buffer[i] <= '9')
            i++;
        else
            return (84);
    }
    i++;
    while (buffer[i] != '\0') {
        if (buffer[i] == '.' || buffer[i] == 'o' || buffer[i] == '\n')
            i++;
        else
            return (84);
    }
    return (0);
}

int correct_nb_lines(char *buffer, int nb)
{
    int j = 0;
    int l = 0;

    while (buffer[j] != '\n')
        j++;
    j++;
    for (; buffer[j] != '\0'; j++)
        if (buffer[j] == '\n')
            l++;
    if (l != nb)
        return (84);
    return (0);
}

int correct_char_nb(char *buffer, int nb)
{
    int char_in_line = 0;
    int total_char;
    int total_file;
    int j = 0;
    int i;

    while (buffer[j] != '\n')
        j++;
    i = j + 1;
    for (; buffer[i] != '\0'; i++) {
        total_file++;
    }
    i = j + 1;
    for (; buffer[i] != '\n'; i++)
        char_in_line = char_in_line + 1;
    total_char = nb * char_in_line;
    if (total_char != (total_file - nb))
        return (84);
    return (0);
}
