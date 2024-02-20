/*
** EPITECH PROJECT, 2022
** task1
** File description:
** 0
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    for (; my_is_prime(nb) == 0; nb++);
    return nb;
}
