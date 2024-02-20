/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** quote_gestion
*/

#include "sh42.h"

char *error_verif (char *arr_line, int *have_dquote)
{
    int count = 0;
    int count2 = 0;

    for (int i = 0; arr_line[i] != 0; i++) {
        arr_line[i] == '"' && count2 % 2 == 0 ? count++ :
        arr_line[i] == '\'' && count % 2 == 0 ?
        (*have_dquote = 1, count2++) : 0;
    }
    if (count % 2 != 0) {
        my_putstr_error("Unmatched '\"'.\n");
        return_value(1);
        return NULL;
    } else if (count2 % 2 != 0) {
        my_putstr_error("Unmatched '\''.\n");
        return_value(1);
        return NULL;
    }
    return arr_line;
}

char *sup_quotes(char *arr_line, int *i, int *in_quote, int *in_dquote)
{
    if (arr_line[*i] == '"' && *in_dquote == 0)
        *in_quote = *in_quote == 0 ? 1 : 0;
    if (arr_line[*i] == '\'' && *in_quote == 0)
        *in_dquote = *in_dquote == 0 ? 1 : 0;
    if (arr_line[*i] == '"' && *in_dquote == 0) {
        for (int j = *i; arr_line[j] != '\0'; j++)
            arr_line[j] = arr_line[j + 1];
        *i = *i - 1;
    }
    if (arr_line[*i] == '\'' && *in_quote == 0) {
        for (int j = *i; arr_line[j] != '\0'; j++)
            arr_line[j] = arr_line[j + 1];
        *i = *i - 1;
    }
    return arr_line;
}

char *verif_quotes(char *arr_line, int *have_dquote)
{
    int in_quote = 0;
    int in_dquote = 0;

    arr_line = error_verif (arr_line, have_dquote);
    if (arr_line == NULL)
        return NULL;
    for (int i = 0; arr_line[i] != '\0'; i++)
        arr_line = sup_quotes(arr_line, &i, &in_quote, &in_dquote);
    return arr_line;
}
