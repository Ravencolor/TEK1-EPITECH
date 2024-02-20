/*
** EPITECH PROJECT, 2022
** task1
** File description:
** 0
*/

void my_putchar(char c);

void show_string(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
}
