/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** home_made.c
*/

#include "mysh.h"
#include <stdio.h>

int find_pos(char *command)
{
    int pos = 0;
    int col = 0;
    int status = 0;
    char *idx[] = {"env", "exit", "cd", "setenv", NULL};

    while (idx[pos] != NULL && status != 1) {
        status = my_strcmp(command, idx[pos]);
        if (status == 1)
            return (pos);
        col = 0;
        pos = pos + 1;
    }
    return (-1);
}
int command_recognition(mysh_t *mysh, char *buffer)
{
    int number;
    int (*tabptrfn[]) (char *, mysh_t *mysh) = {&env_command, &exit_command, &cd_command, &setenv_command};

    number = find_pos(buffer);
    if (number < 0)
        return (-1);
    if (number >= 0) {
        if ((tabptrfn[number] (buffer, mysh)) == 84) {
            return (84);
        }
    }
    return (0);
}