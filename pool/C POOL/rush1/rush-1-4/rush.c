/*
** EPITECH PROJECT, 2022
** rush-1-4.c
** File description:
** rush-1-4.c
*/

void top_bottom(int x)
{
    my_putchar('A');
    for (int i = x - 2; i > 0; i--)
        my_putchar('B');
    my_putchar('C');
    my_putchar('\n');
}

void middle(int x, int y)
{
    for (int i = y - 2; i > 0; i--) {
        my_putchar('B');
        for (int u = x - 2; u > 0; u--)
            my_putchar(' ');
        my_putchar('B');
        my_putchar('\n');
    }
}

void exception_y(int x, int y)
{
    my_putchar('B');
    for (int i = x - 2; i > 0; i--)
        my_putchar('B');
    my_putchar('B');
    my_putchar('\n');
}

void exception_x(int x, int y)
{
    my_putchar('B');
    my_putchar('\n');
    for (int i = y - 2; i > 0; i--) {
        my_putchar('B');
        my_putchar('\n');
    }
    my_putchar('B');
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (x < 1 || y < 1)
        write(2, "Invalid size\n", 15);
    if (x > 1 && y == 1)
        exception_y(x, y);
    if (x == 1 && y == 1) {
        my_putchar('B');
        my_putchar('\n');
    }
    if (x == 1 && y > 1)
        exception_x(x, y);
    if (x > 1 && y > 1) {
        top_bottom(x);
        middle(x, y);
        top_bottom(x);
    }
}
