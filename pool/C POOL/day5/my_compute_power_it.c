/*
** EPITECH PROJECT, 2022
** my_compute_power_it.c
** File description:
** Power
*/

int my_compute_power_it (int nb, int p)
{
    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    for (int a = nb; p > 1;p--) {
        nb = nb *a;
    }
    return nb;
}
