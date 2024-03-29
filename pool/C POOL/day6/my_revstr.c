/*
** EPITECH PROJECT, 2022
** my_revstr
** File description:
** Write a function that reverses a string
*/

int my_strlen (char const *str);

char *my_revstr(char *str)
{
    int a = 0;
    int b = my_strlen(str) - 1;
    char c = str[a];
    while (a < b) {
        c = str[a];
        str[a] = str[b];
        str[b] = c;
        a++;
        b--;
    }
    return str;
}
