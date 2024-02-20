/*
** EPITECH PROJECT, 2022
** my_isneg.
** File description:
** positive or negative
*/
int my_isneg(int nb)
{
    int positif;
    int negatif;
    positif = 80;
    negatif = 78;
    if ( nb >= 0 ){
        my_putchar(positif);
        } else if (nb < 0 ){
        my_putchar(negatif);
        }
}
