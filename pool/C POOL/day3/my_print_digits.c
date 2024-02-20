/*
** EPITECH PROJECT, 2022
** my_print_digits.c
** File description:
** displays all the digits
*/
void    my_print_digits(void)
{
    char numb;
    numb = 47;
    while (numb < 57){
        numb++;
        my_putchar(numb);
    }
}
