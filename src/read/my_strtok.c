/*
** EPITECH PROJECT, 2022
** my_strtok
** File description:
** my_strtok
*/

#include <stdlib.h>

int len_word(char *str, char sep, int i)
{
    int lenw = 0;
    for ( ; str[i + lenw] != sep && str[i + lenw] != '\0'; lenw++);
    return lenw;
}

static int nb_word(char *str, char sep)
{
    int nb = 0;
    for (int i = 0; str[i] != '\0'; ) {
        for ( ; str[i] == sep; i++);
        if (str[i] != sep)
            nb++;
        for ( ; str[i] != sep && str[i] != '\0'; i++);
    }
    return nb;
}

char **my_strtok(char *str, char sep)
{
    int i = 0;
    if (str == NULL)
        return NULL;
    int nbw = nb_word(str, sep);
    char **res = malloc(sizeof(char *) * (nbw + 1));
    for (int k = 0; k < nbw; k++) {
        for ( ; str[i] == sep; i++);
        int lenw = len_word(str, sep, i);
        res[k] = malloc(sizeof(char) * (lenw + 1));
        for (int j = 0; j != lenw; i++, j++)
            res[k][j] = str[i];
        res[k][lenw] = '\0';
        for ( ; str[i] != sep && str[i] != '\0'; i++);
    }
    res[nbw] = NULL;
    return res;
}
