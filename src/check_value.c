/*
** EPITECH PROJECT, 2020
** B-PSU-210-BDX-2-1-minishell2-florent.canales
** File description:
** check_value.c
*/

#include "mysh.h"
#include <stdio.h>

int len_count(char *str, int i)
{
    int len;

    if (i == 1) {
        for (len = 0; str[len] != '='; len = len + 1);
    } else {
        for (len = 0; str[len] != '\0'; len = len + 1);
    }
    return (len);
}

int cmp(char *str1, char *str2)
{
    int pos;

    if (len_count(str1, 1) != len_count(str2, 2))
        return (0);
    for (pos = 0; str2[pos] != '\0'; pos = pos + 1) {
        if (str1[pos] != str2[pos])
            return (0);
    }
    return (1);
}

int check_value(mysh_t *mysh, char *val)
{
    int line = 0;
    int status = 0;

    while (mysh->my_env[line] != NULL && status == 0) {
        if (cmp(mysh->my_env[line], val) == 1)
            return (line);
        line = line + 1;
    }
    return (-1);
}