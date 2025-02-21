/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** my_strlen.c
*/

#include <stdio.h>

int my_strlen(char *buffer)
{
    int len = 0;

    while (buffer[len] != '\0' && buffer[len] != '\n') {
        len  = len + 1;
    }
    return (len);
}