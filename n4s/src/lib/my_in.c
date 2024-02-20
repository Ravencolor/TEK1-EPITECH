/*
** EPITECH PROJECT, 2023
** my_in
** File description:
** my_in
*/

int my_in(char want, char *source)
{
    for (int i = 0; source[i] != '\0'; i++)
        if (source[i] == want)
            return 1;
    return 0;
}

int how_many_in(char *source, char *want)
{
    int count = 0;

    for (int i = 0; source[i] != '\0'; i++)
        if (my_in(source[i], want))
            count++;
    return count;
}
