/*
** EPITECH PROJECT, 2022
** tesk1
** File description:
** power
*/

int my_compute_power_rec(int nb, int p)
{
    int final;

    if (nb >= 13)
        return 0;
    if (p <= 0)
        return 0;
    if (p > 0)
        final = nb * my_compute_power_rec(nb, p - 1);
    return final;
}
