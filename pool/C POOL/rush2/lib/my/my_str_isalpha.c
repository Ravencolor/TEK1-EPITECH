/*
** EPITECH PROJECT, 2022
** my_str_isalpha.c
** File description:
** my_str_isalpha.c
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z')) {
            j++;
        }
        i++;
    }
    return (j);
}
