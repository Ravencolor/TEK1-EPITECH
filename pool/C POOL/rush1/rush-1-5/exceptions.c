/*
** EPITECH PROJECT, 2022
** RUSH-1-3/EXCEPTIONS
** File description:
** Exceptions for third function of first rush
*/

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
