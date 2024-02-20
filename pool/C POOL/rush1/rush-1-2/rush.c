/*
** EPITECH PROJECT, 2022
** RUSH-1-2
** File description:
** Second function of first rush
*/

void top(int x)
{
    my_putchar('/');
    for (int i = x - 2; i > 0; i--)
        my_putchar('*');
    my_putchar('\\');
    my_putchar('\n');
}

void bottom(int x)
{
    my_putchar('\\');
    for (int i = x - 2; i > 0; i--)
        my_putchar('*');
    my_putchar('/');
    my_putchar('\n');
}

void middle(int x, int y)
{
    for (int i = y - 2; i > 0; i--) {
        my_putchar('*');
        for (int u = x - 2; u > 0; u--)
            my_putchar(' ');
        my_putchar('*');
        my_putchar('\n');
    }
}

void rush(int x, int y)
{
    if (x < 1 || y < 1)
        write(2, "Invalid size\n", 15);
    if (x > 1 && y == 1)
        exception_y(x, y);
    if (x == 1 && y == 1) {
        my_putchar('*');
        my_putchar('\n');
    }
    if (x == 1 && y > 1)
        exception_x(x, y);
    if (x > 1 && y > 1) {
        top(x);
        middle(x, y);
        bottom(x);
    }
}
