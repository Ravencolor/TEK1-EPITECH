/*
** EPITECH PROJECT, 2022
** my_is_prime
** File description:
** return 1 if the number is prime, 0 otherwise
*/

#include "libmy.h"

int my_is_prime(int nb)
{
    if (nb <= 1)
        return (0);
    for (int i = 2; i < nb; i++) {
        if (nb % i == 0)
            return (0);
    }
    return (1);
}
