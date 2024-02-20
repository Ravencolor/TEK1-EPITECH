/*
** EPITECH PROJECT, 2022
** my_params_to_list.c
** File description:
** task1
*/
#include "./include/my.h"
#include "./include/mylist.h"
linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *element;

    if (ac > 0) {
        element = malloc(sizeof(*element));
        element->data = (void *) av[ac - 1];
        element->next = my_params_to_list(ac - 1, av);
    }
        if (ac == 0)
        return 0;
    return element;
}
