/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** A function that copies a string into another.
*/

char *my_strcpy ( char * dest , char const * src )
{
    int k = 0;
    while (src[k] != '\0') {
        dest[k] = src[k];
        k = k + 1;
    }
    dest[k] = '\0';
    return dest;
}
