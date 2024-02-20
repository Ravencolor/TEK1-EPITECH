/*
** EPITECH PROJECT, 2022
** task1
** File description:
** 0
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int   i;
    i = 0;
    while (src[i] && i < n) {
        dest[i] = src[i];
        i = i + 1;
    }
    if (!src [n - 1])
        dest[i] = '\0';
    return (dest);
}
