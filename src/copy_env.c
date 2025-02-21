/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** copy_env.c
*/

#include "mysh.h"
#include <stdio.h>
#include <stdlib.h>

int count_line(char **env)
{
    int pos = 0;
    int nb_line = 0;

    while (env[pos] != NULL) {
        pos = pos + 1;
        nb_line = nb_line + 1;
    }
    return (nb_line);
}

int count_col(char *str)
{
    int nb_col = 0;
    int pos = 0;

    while (str[pos] != '\n' && str[pos] != '\0') {
        pos = pos + 1;
        nb_col = nb_col + 1;
    }
    return (nb_col);
}

void my_strcp(mysh_t *mysh, int rep, char *str)
{
    int pos = 0;

    while (str[pos] != '\0' && str[pos] != '\n') {
        mysh->my_env[rep][pos] = str[pos];
        pos = pos + 1;
    }
    mysh->my_env[rep][pos] = '\0';
}

char **copy_env(mysh_t *mysh ,char **env)
{
    int col;
    int line = count_line(env);
    int rep = 0;

    mysh->my_env = malloc(sizeof(char *) * (line + 1));
    while (rep < line) {
        col = count_col(env[rep]);
        mysh->my_env[rep] = malloc(sizeof(char) * (col + 1));
        my_strcp(mysh, rep, env[rep]);
        rep = rep + 1;
    }
    mysh->my_env[rep] = NULL;
}