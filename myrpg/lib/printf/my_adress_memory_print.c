/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-enzo.boron
** File description:
** my_adress_memory_print
*/

#include "printf.h"

void my_adress_memory_print(void *a)
{
    long arg = (long)a;
    if (arg < 0)
        arg *= -1;
    my_putstr_print("0x7ffc");
    my_hex_lower_print(arg);
}
