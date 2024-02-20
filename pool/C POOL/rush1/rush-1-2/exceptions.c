/*
** EPITECH PROJECT, 2022
** RUSH-1-2
** File description:
** Exceptions for second function of first rush
*/

void exception_y(int x, int y)
{
    for (int i = x; i > 0; i--)
        my_putchar('*');
    my_putchar('\n');
}

void exception_x(int x, int y)
{
    for (int i = y; i > 0; i--) {
        my_putchar('*');
        my_putchar('\n');
    }
}
