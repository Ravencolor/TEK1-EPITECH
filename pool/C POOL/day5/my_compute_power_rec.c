/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** recursive fonction power
*/
int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return 1;
    if (nb >= 13)
        return 0;
    if (p > 0)
        return (nb * my_compute_power_rec(nb, p - 1));
}
