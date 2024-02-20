/*
** EPITECH PROJECT, 2022
** task1
** File description:
** 1
*/

char     *my_strlowcase(char *str)
{
    int	i;
    i = 0;
    while (str[i] >= 'A' && str[i] <= 'Z') {
        str[i] = str[i] + 32;
        i = i + 1;
    }
}
