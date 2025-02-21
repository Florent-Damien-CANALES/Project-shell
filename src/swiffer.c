/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** clean_str.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_char(char *str)
{
    int nb_char = 0;
    int pos = 0;
    int status = 0;

    for (pos; str[pos] <= 32; pos = pos + 1);
    while (str[pos] != '\0' && str[pos] != '\n') {
        if (str[pos] > 32) {
            nb_char = nb_char + 1;
        } else if ((str[pos] == 32 || str[pos] == 9) && str[pos + 1] > 32) {
            nb_char = nb_char + 1;
        }
        pos = pos + 1;
    }
    return(nb_char);
}

char *swiffer(char *str, char *clean_str)
{
    int pos_clean = 0;
    int pos = 0;

    clean_str = malloc(sizeof(char) * ((count_char(str)) + 1));

    for (pos; str[pos] <= 32; pos = pos + 1);
    while (str[pos] != '\0' && str[pos] != '\n') {
        if (str[pos] > 32) {
            clean_str[pos_clean] = str[pos];
            pos_clean = pos_clean + 1;
        } else if ((str[pos] == 32 || str[pos] == 9) && str[pos + 1] > 32) {
            clean_str[pos_clean] = str[pos];
            pos_clean = pos_clean + 1;
        }
        pos = pos + 1;
    }
    clean_str[pos_clean] = '\0';
    return (clean_str);
}