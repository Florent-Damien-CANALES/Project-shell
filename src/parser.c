/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** parser_bis.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int count_word(char *buffer, char c)
{
    int nb_word = 1;

    for(int i = 0; buffer[i] != '\0'; i = i + 1) {
        if (buffer[i] == c)
            nb_word = nb_word + 1;
    }
    return (nb_word);
}

int count_letter(int *pos, char *buffer, char c)
{
    int line = 0;
    int nb_letter = 0;

    while (buffer[*pos] != c && buffer[*pos] != '\0') {
        nb_letter = nb_letter + 1;
        *pos = *pos + 1;
    }
    if (buffer[*pos] != '\0' && buffer[*pos] == c)
        *pos = *pos + 1;
    return (nb_letter);
}

char **fill_tab(char **tab, char *buffer)
{
    int col = 0;
    int line = 0;
    int pos = 0;

    while (tab[line] != NULL) {
        while (tab[line][col] != '\0') {
            tab[line][col] = buffer[pos];
            col = col + 1;
            pos = pos + 1;
        }
        col = 0;
        line = line + 1;
        pos = pos + 1;
    }
    return (tab);
}

char **parser(char **tab, char *buffer, char c)
{
    int line = 0;
    int pos = 0;
    int nb_word = count_word(buffer, c);
    int nb_letter;

    tab = malloc(sizeof(char *) * (nb_word + 1));
    while (line < nb_word) {
        nb_letter = count_letter(&pos, buffer, c);
        tab[line] = malloc(sizeof(char) * (nb_letter + 1));
        tab[line][nb_letter] = '\0';
        for (int i = 0; i < nb_letter; i = i + 1)
            tab[line][i] = 'X';
        line = line + 1;
    }
    tab[nb_word] = NULL;
    fill_tab(tab, buffer);
    return(tab);
}