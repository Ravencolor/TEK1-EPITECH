/*
** EPITECH PROJECT, 2022
** my_print_alpha.c
** File description:
** Displays the lowercase alphabet in ascending order, on a single line
*/

void my_putchar(char c);

int show_alphabet(void)
{
    char	lettre;

    lettre = 96;
    while (lettre < 122){
        lettre++;
        my_putchar(lettre);
        }
}
