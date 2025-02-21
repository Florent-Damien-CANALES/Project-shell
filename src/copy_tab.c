/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** env_copy.c
*/

#include "mysh.h"
#include <stdio.h>
#include <stdlib.h>

int nb_line(char **env)
{
    int pos = 0;
    int nb_line = 0;

    while (env[pos] != NULL) {
        pos = pos + 1;
        nb_line = nb_line + 1;
    }
    return (nb_line);
}

int nb_col(char *str)
{
    int nb_col = 0;
    int pos = 0;

    while (str[pos] != '\n' && str[pos] != '\0') {
        pos = pos + 1;
        nb_col = nb_col + 1;
    }
    return (nb_col);
}

char *tab_copy(char **env, int rep, char *str)
{
    int pos = 0;

    while (env[rep][pos] != '\0') {
        str[pos] = env[rep][pos];
        pos = pos + 1;
    }
    str[pos] = '\0';
    return (str);
}

char **copy_tab(char **src ,char **copy, int add)
{
    int col;
    int line = nb_line(src);
    int rep = 0;

    copy = malloc(sizeof(char *) * (line + (1 + add)));
    while (rep < line) {
        col = nb_col(src[rep]);
        copy[rep] = malloc(sizeof(char) * (col + 1));
        copy[rep] = tab_copy(src, rep, copy[rep]);
        rep = rep + 1;
    }
    copy[rep] = NULL;
    return (copy);
}