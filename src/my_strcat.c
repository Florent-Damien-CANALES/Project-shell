/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** my_strcat
*/

#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str)
{
    int nb_char = 0;

    while (str[nb_char] != '\0' && str[nb_char] != '\n'){
        nb_char = nb_char + 1;
    }
    return(nb_char);
}

char *my_strcat(char const *str1, char const *str2, char *fusion)
{
    int pos = 0;
    fusion = malloc(sizeof(char) * (((my_strlen(str1)) + (my_strlen(str2))) + 2));

    for(int i = 0; str1[i] != '\0'; i = i + 1) {
        fusion[pos] = str1[i];
        pos = pos + 1;
    }
    fusion[pos] = '/';
    pos = pos + 1;
    for(int i = 0; str2[i] != '\0'; i = i + 1) {
        fusion[pos] = str2[i];
        pos = pos + 1;
    }
    fusion[((my_strlen(str1)) + (my_strlen(str2))) + 1] = '\0';
    printf("%s", fusion);
    return (fusion);
}