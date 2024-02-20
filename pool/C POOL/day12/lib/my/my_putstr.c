/*
** EPITECH PROJECT, 2022
** my_puststr.c
** File description:
** j'ai pas de des
*/

void my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
