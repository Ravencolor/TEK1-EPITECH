/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** recursive fonction power
*/

int recursive_power(int nb, int p)
{
    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    return (nb * recursive_power(nb, p - 1));
}
