/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-enzo.boron
** File description:
** verification_letter
*/

#include "printf.h"

int verification(char letter)
{
    char *letter_in_tab = "dciu+oxXb";
    char *letter_in_tab_dbl = "fF";
    char * letter_in_tab_str = "pns";
    for (int i = 0; letter_in_tab[i] != '\0'; i++)
        if (letter_in_tab[i] == letter)
            return 1;
    for (int i = 0; letter_in_tab_dbl[i] != '\0'; i++)
        if (letter_in_tab_dbl[i] == letter)
            return 2;
    for (int i = 0; letter_in_tab_str[i] != '\0'; i++)
        if (letter_in_tab_str[i] == letter)
            return 3;
    return 0;

}
