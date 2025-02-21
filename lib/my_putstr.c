/*
** EPITECH PROJECT, 2020
** L
** File description:
** L
*/

#include "../include/lib.h"

int my_putstr(char const *str)
{
    int pos = 0;

    while (str[pos] != '\0'){
        my_putchar(str[pos]);
        pos = pos + 1;
    }
    return (0);
}