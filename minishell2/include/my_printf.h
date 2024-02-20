/*
** EPITECH PROJECT, 2022
** minishell
** File description:
** main
*/

#ifndef SHELL_H_
    # define SHELL_H_

    #include <sys/ioctl.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    #include <sys/wait.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <errno.h>
    #include <dirent.h>
    #include <pwd.h>
    #include <grp.h>
    #include <signal.h>
    #include <time.h>
    #include <stdarg.h>

    int main(int ac, char **av, char **ev);
    char *my_mem(char *str);
    void ctrlc(void);
    void sls(char *mem, int pd, char **av, char **ev);
    void pwd(char *mem, int pd, char **av, char **ev);
    int	error(char *str);
    void clear(char *mem, int pd, char **av, char **ev);
    void env(char *mem, int pd, char **av, char **ev);
    void ecd(char *mem);
    void tcd(char *mem);
    void end(char *mem);
    void pent(char *mem);

    int my_printf ( const char *format , ...);
    void my_put_nbr(int nb);
    void my_putchar(char c);
    void my_putstr(char const *str);
    int my_strcmp(char const *s1, char const *s2);
    char *my_strcpy ( char * dest , char const * src );
    int my_strncmp(char const *s1, char const *s2, int n);
    int my_strlen(char const *str);
    int octal(int decnum);

#endif
