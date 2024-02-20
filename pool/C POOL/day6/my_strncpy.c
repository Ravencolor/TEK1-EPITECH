/*
** EPITECH PROJECT, 2022
** my_strncpy
** File description:
**  a function that copies n characters from a string into another.
*/

int *my_strncpy(char *dest, char const *src, int n)
{
    int a = 0;

    while (src [a] && a < n) {
        dest[a] = src[a];
        a++;
    }
    if (!src [n - 1]) {
        dest[a] = '\0';
    }
    return (dest);
}
