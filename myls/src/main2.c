/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** main suite
*/

#include "../include/my_printf.h"

int main2(int argc, char **argv[],int all)
{
    for (int i = 1; i < argc; i++) {
            struct stat stbuf;
            int r = lstat(argv[i], &stbuf);
            if (r == -1) {
                print_perror("lstat");
                exit(1);
            }
            if (S_ISDIR(stbuf.st_mode))
                print_directory(argv[i], all);
            else
                print_file(argv[i], "", &stbuf);
    }
}
