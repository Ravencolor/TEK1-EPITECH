/*
** EPITECH PROJECT, 2022
** my_compute_factorial_rec.c
** File description:
** factorial with recursive
*/

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb > 12)
        return 0;
    else if (nb == 0)
        return (1);
    else
        return (nb * my_compute_factorial_rec(nb - 1));

}
