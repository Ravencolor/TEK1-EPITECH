/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** dsk
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}
