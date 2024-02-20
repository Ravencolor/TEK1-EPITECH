/*
** EPITECH PROJECT, 2022
** task1
** File description:
** compute_square_root
*/


int my_compute_square_root(int nb)
{
    for (int i = 0; i * i < nb && i * i != nb; i++) {
        if (i * i == nb) {
            return i;
        }
        return 0;
    }
    return 0;
}
