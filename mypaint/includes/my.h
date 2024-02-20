/*
** EPITECH PROJECT, 2022
** my
** File description:
** my
*/
#ifndef MY_H_
    #define MY_H_

    #include <SFML/Graphics/Export.h>
    #include <SFML/Graphics/Color.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/Graphics/Transform.h>
    #include <SFML/Graphics/Types.h>
    #include <SFML/System/Vector2.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/System/Clock.h>
    #include <SFML/Graphics.h>

    #include <stddef.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <math.h>


void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_printf(const char *format, ...);
void myls(const char *dir,int op_a,int op_l);

int option_file(sfRenderWindow *w, sfEvent event);
int sprite(sfRenderWindow *w, sfEvent event);
int window(sfRenderWindow *w, sfEvent event);
int pinceau(sfRenderWindow *w, sfEvent event);
int gomme(sfRenderWindow *w, sfEvent event);
int crayon(sfRenderWindow *w, sfEvent event);
int new_file(sfRenderWindow *w, sfEvent event);
int open_file(sfRenderWindow *w, sfEvent event);
int help(sfRenderWindow *w, sfEvent event);
int gomme2(sfRenderWindow* w, sfEvent event);
int stylo(sfRenderWindow* w, sfEvent event);

#endif /* MY_H_ */
