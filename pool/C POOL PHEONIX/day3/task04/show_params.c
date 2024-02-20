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

int    main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
        my_putstr(argv[i]);
    return 0;
}
