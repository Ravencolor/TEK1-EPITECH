/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_getnbr.c
*/

int my_getnbr(char const *str)
{
    int nb = 0;
    int signe = 1;
    int i = 0;

    while (str[i] == '-' || str[i] == '+')
        i++;
    if (str[i - 1] == '-')
        signe *= -1;
    i++;
    while (str[i] <= '9' && str[i] > '0' && str[i] != '\0') {
        nb *= 10;
        nb += str[i++] - 48;
    }
    return (signe * nb);
}
