/*
** EPITECH PROJECT, 2022
** task4
** File description:
** 0
*/

void    my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    my_putchar('\n');
    return 0;
}

int    my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int score;

    while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
        i++;
    if (s1[i] > s2[i])
        return (-1);
    if (s1[i] < s2[i])
        return 1;
    return 0;
}

int    main(int ac, char **av)
{
    int i;
    char *temp;

    for (i = 0; i < ac - 1; i++) {
        if (my_strcmp(av[i], av[i + 1]) < 0) {
            temp = av[i];
            av[i] = av[i + 1];
            av[i + 1] = temp;
            i = 0;
        }
    }
    for (i = 0; i < ac; i++)
        my_putstr(av[i]);
    return 0;
}
