/*
** EPITECH PROJECT, 2022
** task3
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

int *concat_strings(char *dest, char const *src)
{
    int i;
    int len;

    len = my_strlen(dest);
    i = 0;
    while (src[i] != 0) {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return dest;
}
