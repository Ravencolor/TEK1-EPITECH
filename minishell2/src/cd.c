/*
** EPITECH PROJECT, 2022
** minishell
** File description:
** main
*/

#include "../include/my_printf.h"

void ecd(char *mem)
{
    if (my_strcmp(mem, "cd") == 0){
        tcd(mem);
    } else
        end(mem);
}

void tcd(char *mem)
{

}
