/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** find the biggest square
*/

#include "../include/bsq.h"

int bsq(char const *file)
{
    int rd;
    int fd;
    char *buffer;
    struct stat st;

    fd = open(file, O_RDONLY);
    if (fd == -1)
        return (84);
    stat(file, &st);
    buffer = malloc(st.st_size + 1);
    rd = read(fd, buffer, st.st_size);
    if (rd == -1 || rd == 0)
        return (84);
    if (error(buffer) == 84)
        return (84);
    display(buffer);
    free(buffer);
    close(fd);
    return (0);
}

void display(char *buffer)
{
    int i = 0;

    while (buffer[i] != '\n')
        i++;
    i++;
    for (; buffer[i] != '\0'; i++)
        my_putchar(buffer[i]);
}

int main(int ac, char **av)
{
    if (ac != 2) {
        write(2, ERROR_ARG, my_strlen(ERROR_ARG));
        return (84);
    }
    if (bsq(av[1]) == 84)
        return (84);
    return (0);
}
