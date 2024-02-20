/*
** EPITECH PROJECT, 2022
** task1
** File description:
** getnbr
*/

int to_number(char *str)
{
    int i = 0;
    int n = 0;
    int signe = 1;

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] == '-' && signe == -1 && n == 0) ||
        (str[i] == '+' && n == 0))
            signe = 1;
        if (str[i] == '-' && n == 0)
            signe = -1;
        if ((str[i] < '0' || str[i] > '9') && n > 0)
            break;
        if ((str[i] < '0' || str[i] > '9') && n == 0)
            continue;
        n = n + str[i] - 48;
        n = n * 10;
    }
    n /= 10;
    return (n * signe);
}
