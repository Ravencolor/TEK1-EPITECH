/*
** EPITECH PROJECT, 2023
** str_is_num
** File description:
** str_is_num
*/

int my_str_isnum(char const *str)
{
    int len = strlen(str);

    if (len == 0)
        return 1;
    for (int j = 0; j != len - 1; j++) {
        if (str[j] < 48 || str[j] > 57)
            return 0;
    }
    return 1;
}
