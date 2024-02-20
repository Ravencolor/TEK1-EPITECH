/*
** EPITECH PROJECT, 2022
** task1
** File description:
** 0
*/

int *my_strncat(char *dest, char const *src, int nb)
{
    int   i;
    int   j;
    i = 0;
    j = 0;
    while (dest[i] != '\0') {
        i = i + 1;
    }
    while (src[j] != '\0' || j <= nb) {
        dest[i] = src[j];
        j = j + 1;
    }
    dest[i] = '\0';
    return (dest);
}
