/*
** EPITECH PROJECT, 2023
** simple_liken_list
** File description:
** add_node
*/

#include "list.h"

list_env *add_node_head(list_env *list, char *str)
{
    list_env *tmp = malloc(sizeof(list_env));
    tmp->env = my_strdup(str);
    tmp->next = list;
    return tmp;
}

list_env *add_node_tail(list_env *list, char *str)
{
    if (list == NULL) {
        list = add_node_head(list, str);
        return list;
    }
    list_env *node = malloc(sizeof(list_env));
    list_env *tmp = list;
    node->env = my_strdup(str);
    node->next = NULL;
    for (; tmp->next != NULL; tmp = tmp->next);
    tmp->next = node;
    return list;
}
