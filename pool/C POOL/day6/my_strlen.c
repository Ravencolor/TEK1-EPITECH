/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** Function that counts and returns the number of characters found in string
*/

int  my_strlen(char const *str)
{
    int i;

    i = 0;
        while (str[i] != '\0'){
            i++;
        }
        return (i);
}
