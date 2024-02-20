/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-enzo.boron
** File description:
** my_getopt.c
*/

#include "sprintf.h"

void init_parcing(parcing_t *pars)
{
    pars->glo = 0;
    pars->optarg = NULL;
}

char **insert_space(char **av)
{
    int i = 0, y = 0;
    for (; av[i] != NULL && av[i][y] != '\0'; y++) {
        if (av[i][y + 1] == '\0') {
            i++;
            y = -1;
        } if (my_strlen_s(av[i]) == 2){
            i++;
            y = -1;
        } if (my_strlen_s(av[i]) == 3) {
            char save = av[i][2];
            av[i][2] = ' ';
            av[i][3] = save;
            i++;
            y = -1;
        }
    }
    return av;
}

int count_element(char *argv)
{
    char *line = malloc(sizeof(char) * my_strlen_s(argv));
    int a = 0;
    for (int i = 0; argv[i]; i++)
        if (argv[i] == ':')
            a++;
    return (a + 1);
}

int my_getopt(int argc, char **argv, char *parcing, parcing_t *parse)
{
    int ret = count_element(parcing);
    if (parse->glo == (2 * ret))
        return -1;
    parse->optarg = argv[parse->glo + 2];
    char save = parcing[parse->glo];
    parse->glo += 2;
    return save;
}
