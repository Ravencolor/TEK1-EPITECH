/*
** EPITECH PROJECT, 2022
** task1
** File description:
** 0
*/

int my_putchar(char);

void my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
}
