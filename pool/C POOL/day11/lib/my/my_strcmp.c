/*
** EPITECH PROJECT, 2022
** task1
** File description:
** 0
*/

int my_strcmp(char const *s1, char const *s2)
{
    int   i;
    i = 0;
    while (s1[i]) {
        if (s1[i] < s2[i])
            return (-1);
        if (s1[i] > s2[i])
            return (1);
        i++;
    }
    if (s1[i] < s2[i])
        return (-1);
    if (s1[i] > s2[i])
        return (1);
    return (0);
}
