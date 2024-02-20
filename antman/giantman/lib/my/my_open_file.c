/*
** EPITECH PROJECT, 2022
** my_open_file
** File description:
** dsk
*/

#include "libmy.h"

int my_size_file(char const *filepath)
{
    struct stat st;
    stat(filepath, &st);
    return (st.st_size);
}

char *my_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) * my_size_file(filepath) + 1);
    int size = read(fd, buffer, my_size_file(filepath));

    if (fd == -1)
        return (NULL);
    buffer[size] = '\0';
    close(fd);
    return (buffer);
}
