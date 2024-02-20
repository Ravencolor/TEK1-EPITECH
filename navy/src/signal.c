/*
** EPITECH PROJECT, 2023
** signal
** File description:
** navy
*/

#include "../include/my.h"

void my_handler(int signum)
{
    if (signum == SIGUSR1) {
        printf("Received SIGUSR1!\n");
    }
    signal(SIGUSR1, my_handler);
}

int main(int argc, char *argv[])
{
if (signal(SIGUSR1,sig_handler) == SIG_ERR) {
    perror("signal");
    exit(EXIT_FAILURE);
}
if (signal(SIGUSR2,sig_handler) == SIG_ERR) {
    perror("signal");
    exit(EXIT_FAILURE);
}

while ( (SIGUSR1+SIGUSR2) < 5)
}
