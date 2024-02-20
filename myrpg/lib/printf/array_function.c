/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-enzo.boron
** File description:
** array_function
*/

#include "printf.h"

ptr_integer init_array_integer(ptr_integer tab_integer[256])
{
    tab_integer['d'] = &my_put_nbr_print;
    tab_integer['c'] = &my_putchar_print;
    tab_integer['i'] = &my_put_nbr_print;
    tab_integer['u'] = &my_put_usigned_print;
    tab_integer['+'] = &my_positive_nbr_print;
    tab_integer['o'] = &my_octet_print;
    tab_integer['x'] = &my_hex_lower_print;
    tab_integer['X'] = &my_hex_upper_print;
    tab_integer['b'] = &my_binary_print;

    return (*tab_integer);
}

ptr_double init_array_double(ptr_double tab_double[256])
{
    tab_double['f'] = &my_double_print;
    tab_double['F'] = &my_double_print;

    return (*tab_double);
}

//tab_string['p'] = &my_adress_memory_print;
ptr_string init_array_string(ptr_string tab_string[256])
{
    tab_string['s'] = &my_putstr_print;

    return (*tab_string);
}
