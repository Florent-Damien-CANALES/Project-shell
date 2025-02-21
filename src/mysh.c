/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** mysh.c
*/

#include "mysh.h"
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void empty_hunter(mysh_t *mysh, char *input)
{
    mysh->empty = 0;

    for (int pos = 0; input[pos] != '\0'; pos = pos + 1) {
        if (input[pos] != 32 && input[pos] != 9 && input[pos] != '\n')
            mysh->empty = 1;
    }
}

void init_data(mysh_t *mysh, char **env)
{
    copy_env(mysh, env);
    mysh->status = 2;
}

char *get_input(mysh_t *mysh, char *input)
{
    input = NULL;
    size_t n = 0;
    int i = getline(&input, &n, stdin);

    mysh->empty = 1;
    if (i < 0) {
        mysh->empty = 0;
        mysh->status = 0;
    }
    if (i <= 1)
        mysh->empty = 0;
    if (i > 1) {
        empty_hunter(mysh, input);
    }
    return (input);
}

int mysh(char **env)
{
    char *buffer;
    mysh_t *mysh = malloc(sizeof(mysh_t));
    init_data(mysh, env);

    signal(SIGINT, control_c_handler);
    while (mysh->status == 2) {
        my_putstr("$>");
        buffer = get_input(mysh, buffer);
        if (mysh->empty == 1)
            execute_command(mysh, buffer);
    }
    return (mysh->status);
}