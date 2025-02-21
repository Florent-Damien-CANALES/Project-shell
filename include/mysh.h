/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** mysh.h
*/

#ifndef MYSH_H
#define MYSH_H

#include "lib.h"

typedef struct mysh {
    char **my_env;
    char **save_env;
    int status;
    int empty;
    int exist;
}mysh_t;

int mysh(char **env);
char **copy_env(mysh_t *mysh ,char **env);
void control_c_handler(int num);
void free_tab(char **tab);
char **parser(char **tab, char *buffer, char c);
int execute_command(mysh_t *mysh, char *buffer);
char *swiffer(char *str, char *clean_str);
int command_recognition(mysh_t *mysh, char *buffer);
int env_command(char *command, mysh_t *mysh);
int exit_command(char *command, mysh_t *mysh);
int cd_command(char *command, mysh_t *mysh);
int setenv_command(char *command, mysh_t *mysh);
char **copy_tab(char **src ,char **copy, int add);
int check_value(mysh_t *mysh, char *val);

#endif