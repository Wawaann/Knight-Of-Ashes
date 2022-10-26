/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-BSQ-ewan.bigotte
** File description:
** utils2
*/

#include "../include/my.h"

char *my_revstr (char *str)
{
    int i = 0;
    int end = my_strlen(str) - 1;
    char temp;

    while (i < end) {
        temp = str[i];
        str[i] = str[end];
        str[end] = temp;
        i += 1;
        end -= 1;
    }
    return str;
}
