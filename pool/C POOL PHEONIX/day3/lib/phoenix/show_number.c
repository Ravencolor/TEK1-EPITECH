/*
** EPITECH PROJECT, 2022
** task1
** File description:
** put nbr
*/

void my_putchar(char c);
void show_string(char const *str);

void  show_number(int nb)
{
    int d;

    d = 1;
    if (nb == -2147483648)
        show_string("-2147483648");
    else {
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
        }
    while ((nb / d) >= 10)
        d *= 10;
    while (d > 0) {
        my_putchar((nb / d) % 10 + '0');
        d /= 10;
        }
    }
}
