/*
** EPITECH PROJECT, 2023
** antman
** File description:
** dsk
*/

#ifndef ANTMAN_H_
    #define ANTMAN_H_
    typedef struct antman_t {
        int ac;
        char **av;
        char *buffer;
        char **arr;
        int n;
        char *res;
        int numb;
        int o;
        int i;
        int j;
        int count;
    }antman_s;

    int error(int i);
    int size_of_str(char *str);
    char int_to_char(int nb);
    int compress_multiple_word(antman_s *antman);
    int print_the_final(antman_s *antman);
    int is_directory(char *str);
    int compress_image(antman_s *antman);
    char **my_str_to_word_array_mod(char const *str);

#endif /* !ANTMAN_H_ */
