/*
** EPITECH PROJECT, 2023
** giantman
** File description:
** dsk
*/

#ifndef GIANTMAN_H_
    #define GIANTMAN_H_
    typedef struct giantman_t {
        char *buffer;
        char **arr;
        char *number;
        int i;
        int k;
    }giantman_s;
    char **my_str_to_word_array_mod(char const *str);
    int decompress_image(char *av, giantman_s *giantman, char *avv);
    int error(int i);
    int my_strshr(char *str, char char_find);
    int size_of_str(char *str);
    int verif_number(char **av);
    int read_compress_file(char *av, giantman_s *giantman, char *avv);
    int is_directory(char *str);

#endif /* !GIANTMAN_H_ */
