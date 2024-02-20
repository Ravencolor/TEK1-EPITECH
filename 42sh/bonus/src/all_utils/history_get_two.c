/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** history_get_two
*/

#include "sh42.h"

int getch_char(void)
{
    int ch;
    struct termios oldt, newt;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

char *option(history_get_line_t *histo, int *len, char *line)
{
    if (histo->ch == 4 && histo->size == 0) {
        *len = -1;
        histo->breakk = 1;
        return NULL;
    }
    if (histo->ch == 127 && histo->size > 0) {
        line[histo->size--] = '\0';
        my_printf("\b \b");
    }
    return line;
}

char *boucle(history_get_line_t *histo, int *len, char *line)
{
    while (1) {
        move_get(histo, line);
        line = option(histo, len, line);
        if (histo->continu == 1) {
            histo->continu = 0;
            continue;
        }
        if (histo->breakk == 1)
            return NULL;
        if (histo->ch > 31 && histo->ch < 127 && histo->d == 0) {
            line[histo->size] = histo->ch;
            histo->size++;
        }
        if (histo->ch == 10 || histo->ch == 13 || histo->ch == 4)
            break;
        histo->d == 0 ? my_printf("%c", histo->ch) :
        my_printf("%s", line);
        histo->d = 0;
    }
    return line;
}

void declare(history_get_line_t *histo)
{
    histo->ch = 0;
    histo->size = 0;
    histo->count = 0;
    histo->d = 0;
    histo->continu = 0;
    histo->breakk = 0;
    histo->tmp = NULL;
}

char *my_getline(char *line, int *len)
{
    history_get_line_t histo;

    declare(&histo);
    if (isatty(STDIN_FILENO) != 1) {
        if (fgets(line, 10000, stdin) == NULL) {
            *len = -1;
            return NULL;
        }
        *len = my_strlen(line);
        return line;
    }
    line = boucle(&histo, len, line);
    if (line == NULL)
        return NULL;
    line[histo.size] = '\0';
    my_printf("\n");
    *len = histo.size;
    return line;
}
