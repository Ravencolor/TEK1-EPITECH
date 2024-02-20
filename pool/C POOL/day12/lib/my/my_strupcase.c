/*
** EPITECH PROJECT, 2022
** task1
** File description:
** tttttttt
*/
char     *my_strupcase(char *str)
{
    int	i;
    i = 0;
    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i = i + 1;
    }
    return str;
}
