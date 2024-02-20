/*
** EPITECH PROJECT, 2022
** task1
** File description:
** 0
*/
int my_strlen (char const *str);

char *my_revstr(char *str)
{
    int length = my_strlen(str);
    char new_char[length + 1];

    for (int i = 0; i < length; i++) {
        new_char[length - 1 - i] = str[i];
    }

    for (int i = length - 1; i >= 0; i--) {
        str[i] = new_char[i];
    }
    return str;
}
