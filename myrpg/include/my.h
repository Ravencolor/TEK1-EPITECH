/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell1-enzo.boron
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H

    #include <stdlib.h>
    #include <stdarg.h>
    #include <stddef.h>
    #include <unistd.h>
    #include <fcntl.h>

    typedef struct get_element {
        int number_letter;
        char *pathfile;
        char *contenu;
    } get_element;

    char **my_free(char **tab);
    char *my_nstrdup(char *s1, char *s2);
    char *my_persostr(char *s1, char *s2, char *s3);
    void my_put_nbr(int nb);
    void my_putchar(char c);
    void my_putstr(const char *str);
    char *convect_in_char(int a);
    char **my_str_to_world_array(char *str);
    char *my_strcat(char *dest ,char *src);
    char *my_strchr(const char *string, int searchedChar);
    int my_strcmp(const char *s1, const char *s2);
    char *my_strcpy(char *dest, char const *src);
    char *my_strdup(const char *str);
    int my_strlen(const char *str);
    int my_strncmp(const char *s1, const char *env, int x);
    char *my_strstr(char *str ,const char *to_find);
    int file_info(char *pathfile, get_element *element);
    int my_strtab(char **tab);
    char **my_str_to_world_array_perso(char *str, char separateur);
    char **my_cpytab(char **tab, int bool);
    void display_double_array(char **tab);
    int my_getnbr(char *a);

#endif /* MY_H */
