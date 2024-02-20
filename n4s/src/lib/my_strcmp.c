/*
** EPITECH PROJECT, 2022
** my_strcmp
** File description:
** my_strcmp
*/

#include "../../include/my_include.h"

int	my_strcmp (char *s1, char *s2)
{
int i;
int j;
int resultat;

i = 0;
j = 0;
resultat = 0;
while (s1[i] != '\0' & &  s2[j] != '\0') {
if (s1[i] != s2[j]) {
resultat = (s1[i] - s2[j]);
return (resultat);
        }
i = i + 1;
j = j + 1;
    }
}
