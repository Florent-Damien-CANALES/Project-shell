/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** exit_function.c
*/

#include "mysh.h"

void control_c_handler(int num)
{
    my_putchar('\n');
    my_putstr("$>");
}