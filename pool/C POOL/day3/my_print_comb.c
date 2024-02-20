/*
** EPITECH PROJECT, 2022
** my_print_comb.c
** File description:
** displays, in ascending order
*/

void    my_display(int value)
{
    if (to_dp < 7) {
        my_putchar (',');
        my_putchar (' ');
    }
}

int    my_print_comb(void)
{
    int    hundredSection = 0;
    int    tensSection = 1;
    int    unitSection = 2;

    while (hundredSection != 8) {
        display_all(hundredSection, tensSection, unitSection);
        if (unitSection == 9 && tensSection != 8) {
            tensSection++;
            unitSection = tensSection;
        }
        if (unitSection == 9 && tensSection == 8) {
            hundredSection++;
            tensSection = hundredSection + 1;
            unitSection = tensSection + 1;
        } else {
            unitSection++;
        }
    }
    my_putchar('\n');
    return (0);
}

void    display_all(int hundredSection, int tensSection, int unitSection)
{
    my_putchar(hundredSection + 48);
    my_putchar(tensSection + 48);
    my_putchar(unitSection + 48);
    my_display(hundredSection);
}
