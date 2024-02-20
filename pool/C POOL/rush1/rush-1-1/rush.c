/*
** EPITECH PROJECT, 2022
** RUSH-1-1
** File description:
** First function of first rush
*/

void top_bottom(int x)
{
    my_putchar('o');
    for (int i = x - 2; i > 0; i--)
        my_putchar('-');
    my_putchar('o');
    my_putchar('\n');
}

void middle(int x, int y)
{
    for (int i = y - 2; i > 0; i--) {
        my_putchar('|');
        for (int u = x - 2; u > 0; u--)
            my_putchar(' ');
        my_putchar('|');
        my_putchar('\n');
    }
}

void exception_y(int x, int y)
{
    my_putchar('o');
    for (int i = x - 2; i > 0; i--)
        my_putchar('-');
    my_putchar('o');
    my_putchar('\n');
}

void exception_x(int x, int y)
{
    my_putchar('o');
    my_putchar('\n');
    for (int i = y - 2; i > 0; i--) {
        my_putchar('|');
        my_putchar('\n');
    }
    my_putchar('o');
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (x < 1 || y < 1)
        write(2, "Invalid size\n", 15);
    if (x > 1 && y == 1)
        exception_y(x, y);
    if (x == 1 && y == 1) {
        my_putchar('o');
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
