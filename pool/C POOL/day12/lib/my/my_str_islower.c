/*
** EPITECH PROJECT, 2022
** task1
** File description:
** 0
*/

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 122 && 97 <= str[i]) {
        } else
            return (0);
    }
    return (1);
}
