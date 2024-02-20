/*
** EPITECH PROJECT, 2022
** task1
** File description:
** 0
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
}

void  my_put_nbr(int nb)
{
    int d;

    d = 1;
    if (nb == -2147483648)
        my_putstr("-2147483648");
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

int  my_strlen(char const *str)
{
    int i;

    i = 0;
        while (str[i] != '\0'){
            i++;
        }
        return (i);
}
