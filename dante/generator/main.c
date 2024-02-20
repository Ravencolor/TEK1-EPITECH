/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "includes/my.h"

void generate_maze(char m[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            m[i][j] = 'X';
        }
    }
    srand(time(NULL));
    for (int i = 0; i < ROWS - 1; i += 2) {
        for (int j = 0; j < COLS - 1; j += 2) {
            m[i][j] = '*';
m[i + 1][j] = (i < ROWS - 2) ? ((rand() % 2) ? '*' : m[i + 1][j]) : m[i + 1][j];
m[i][j + 1] = (j < COLS - 2) ? ((rand() % 2) ? '*' : m[i][j + 1]) : m[i][j + 1];
        }
    }
    m[0][0] = '*';
    m[ROWS - 1][COLS - 1] = '*';
}

void print_maze(char maze[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            my_printf("%c", maze[i][j]);
        }
        my_printf("\n");
    }
}

int main(void)
{
    char maze[ROWS][COLS];
    generate_maze(maze);
    print_maze(maze);
    return 0;
}
