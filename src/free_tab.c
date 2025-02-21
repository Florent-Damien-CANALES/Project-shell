/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** free_ptr.c
*/

#include "mysh.h"
#include <stdlib.h>

void free_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i = i + 1)
        free(tab[i]);
    free(tab);
}