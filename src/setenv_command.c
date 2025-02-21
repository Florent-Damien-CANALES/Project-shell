/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** setenv_command.c
*/

#include "mysh.h"
#include <stdio.h>
#include <unistd.h>

char **my_realloc(char **env, char **copy, char **av, int od)
{
    int nb_line = 0;
    free_tab(env);
    env = copy_tab(copy, env, 1);
    for (nb_line = 0; env[nb_line] != NULL; nb_line = nb_line + 1);
    printf("%s\n", env[66]);
    return (env);
}

int setenv_command(char *command, mysh_t *mysh)
{
    int line = 0;
    int i = 0;
    char *clean_str = swiffer(command, clean_str);
    char **av = parser(av, clean_str, ' ');

    for (line; av[line] != NULL; line = line + 1);
    if (line == 1) {
        env_command(command, mysh);
        return (0);
    }
    i = check_value(mysh, av[1]);
    if (i >= 0) {
        mysh->save_env = copy_tab(mysh->my_env, mysh->save_env, 0);
        mysh->my_env = my_realloc(mysh->my_env, mysh->save_env, av, 0);
    }
    return (0);
}