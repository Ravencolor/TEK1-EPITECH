/*
** EPITECH PROJECT, 2023
** my
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

void my_putchar(char c);
int my_putstr(char const *str);
int	my_strcmp (char *s1, char *s2);
char *my_strcat(char *dest, char const *src);
int len_array(char **array);
int my_in(char want, char *source);
int how_many_in(char *source, char *want);
char **split_str(char *str, char *separator);

#endif /* MY_H_ */
