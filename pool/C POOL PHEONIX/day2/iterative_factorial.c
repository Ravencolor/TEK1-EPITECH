/*
** EPITECH PROJECT, 2022
** my_compute_factorial_it.c
** File description:
** factorial
*/

int iterative_factorial(int nb)
{
    int produit = 1;
    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0)
        return (1);
    for (int e = nb; e != 0; e--)
        produit = produit * e;
    return produit;
}
