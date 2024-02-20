/*
** EPITECH PROJECT, 2022
** task1
** File description:
** 0
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int	i;
    i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
        i = i + 1;
    if ((s1[i] == '\0' && s2[i] == '\0') || i == n)
        return 0;
    else if (s1[i] > s2[i])
        return (1);
    return (-1);

}
