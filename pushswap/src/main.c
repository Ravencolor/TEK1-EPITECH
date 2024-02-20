/*
** EPITECH PROJECT, 2022
** push_swap
** File description:
** main
*/

#include "../include/my.h"

void print_list(int *list, int size)
{
    for (int i = 0; i < size; i++) {
        my_printf("%d ", list[i]);
    }
    write(1, "\n", 2);
}

void sort(int *l_a, int size)
{
    for (int i = 0; i < size; i++)
        sort2(l_a, size);
}

void sort2(int *l_a, int size)
{
    for (int j = 0; j < size - 1; j++) {
            if (l_a[j] > l_a[j + 1]) {
                my_swap(&l_a[j], &l_a[j + 1]);
                write(1, "sa\n", 4);
            }
        }
    write(1, "rra\n", 5);
}

int main(int argc, char *argv[])
{
    int size = argc - 1;
    int *l_a = (int *) malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
        l_a[i] = atoi(argv[i + 1]);
    }

    sort(l_a, size);
    print_list(l_a, size);

    return 0;
}
