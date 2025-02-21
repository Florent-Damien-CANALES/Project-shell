/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** execute_command.c
*/

#include "mysh.h"
#include <stdio.h>

int home_made(mysh_t *mysh, char *command)
{
    if (command_recognition(mysh, command) == 84)
        return (84);
    return (0);
}

int execute_command(mysh_t *mysh, char *buffer)
{
    char *clean_str;
    char **tab_command;

    clean_str = swiffer(buffer, clean_str);
    tab_command = parser(tab_command, clean_str, ';');
    mysh->exist = 1;
    for (int i = 0; tab_command[i] != NULL && mysh->exist == 1; i = i + 1) {
        mysh->exist == 0;
        if ((home_made(mysh, tab_command[i])) == 84) {
            return (84);
        }
    }
    return (0);
}