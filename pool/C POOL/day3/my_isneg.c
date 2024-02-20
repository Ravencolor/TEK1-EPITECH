/*
** EPITECH PROJECT, 2022
** my_isneg.
** File description:
** positive or negative
*/
int my_isneg(int n)
{
    int positif;
    int negatif;
    positif = 80;
    negatif = 78;
    if ( n >= 0 ){
        my_putchar(positif);
        } else if (n < 0 ){
        my_putchar(negatif);
        }
}
