/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** main
*/

#include "../include/my_printf.h"

void print_perror(const char *s)
{
    char *error = strerror(errno);
    write(2, s, my_strlen(s));
    write(2, ": ", 2);
    write(2, error, my_strlen(error));
    write(2, "\n", 1);
}

void print_file(const char *file, const char *pf, const struct stat *stbuf)
{
    char buffer[1024];
    int size = 0;
    size = sprintf(buffer, "%s", pf);
    size += sprintf(buffer + size, "%s", file);
    if (S_ISLNK(stbuf->st_mode)) {
        char linkname[1024];
        int len = readlink(file, linkname, sizeof(linkname) - 1);
        if (len == -1) {
            print_perror("readlink");
            exit(1);
        }
        linkname[len] = '\0';
        size += sprintf(buffer + size, " -> %s", linkname);
    }
    size += sprintf(buffer + size, "\n");
    write(1, buffer, size);
}

int compare(const void *a, const void *b)
{
    return my_strcmp((const char **)a, *(const char **)b);
}

void print_directory(const char *dirname, int all)
{
    DIR *dir = opendir(dirname);
    if (!dir) {
        print_perror("opendir");
        exit(1);
    }
    struct dirent *entry; char *entries[1024]; int count = 0;
    while ((entry = readdir(dir))) {
        if (!all && entry->d_name[0] == '.')
            continue;
        entries[count++] = entry->d_name;
    }
    closedir(dir); qsort(entries, count, sizeof(char *), compare);
    for (int i = 0; i < count; i++) {
        char path[1024]; sprintf(path, "%s/%s", dirname, entries[i]);
        struct stat stbuf; int r = lstat(path, &stbuf);
        if (r == -1) {
            print_perror("lstat"); exit(1);
        }
    print_file(entries[i], "", &stbuf);
    }
}

int main(int argc, char *argv[])
{
    int all = 0; int pos = 1;
    if (argc > 1 && my_strcmp(argv[1], "-a") == 0)
        all = 1;pos++;
    if (argc == pos) {
    print_directory(".", all);
    } else {
        main2(argc, argv, all);
    }
    return 0;
}
