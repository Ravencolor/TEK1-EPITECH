/*
** EPITECH PROJECT, 2022
** list
** File description:
** list.h
*/

#ifndef _LIST_H_
    #define _LIST_H_

typedef struct list_env {
    char **or_env;
    char **tmp_env;
    char *env;
    struct list_env *next;
} list_env;

typedef struct liken_list {
    char **env;
    int number;
    struct liken_list *next;
} liken_list;

list_env *add_node_head(list_env *list, char *str);
list_env *add_node_tail(list_env *list, char *str);

liken_list *remove_first_node(liken_list *list);
liken_list *remove_last_node(liken_list *list);
liken_list *free_list(liken_list *list);

int repete_nbumber_element(liken_list *list, int number);
int number_of_element(liken_list *list);
int is_empty(liken_list *list);

void display_liken_list(liken_list *list);

#endif /*_LIST_H_*/
