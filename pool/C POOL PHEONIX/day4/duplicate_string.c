/*
** EPITECH PROJECT, 2022
** task1
** File description:
** 0
*/

int  my_strlen(char const *str)
{
    int i;

    i = 0;
        while (str[i] != '\0')
            i++;
        return i;
}

char *duplicate_string(char const *src)
{
    char *dest = malloc(sizeof(char) * my_strlen(src) + 1);
    int i;
    for (i = 0; src[i] != 0; i++)
        dest[i] = src[i];
    dest[i] = 0;
    return dest;
}
