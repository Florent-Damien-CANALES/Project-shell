/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** step1.c
*/

#include "mysh.h"
#include <stdio.h>

int env_command(char *command, mysh_t *mysh)
{
    int i = 0;
    while (mysh->my_env[i] != NULL) {
        my_putstr(mysh->my_env[i]);
        my_putchar('\n');
        i = i + 1;
    }
    return (0);
}