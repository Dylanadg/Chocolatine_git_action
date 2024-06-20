/*
** EPITECH PROJECT, 2024
** mini_sh
** File description:
** header of the project mini shell
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>
#include <errno.h>
#include <fcntl.h>
#include <stdbool.h>

#ifndef MINI
    #define MINI

int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
char **my_strtok(char *str, char *separator);
int my_strcmp(char *str1, char *str2);
char *my_strdup(char *str);
char **my_str_to_word_array(char *str);
int my_printf(const char *format, ...);
void my_putchar(char c);
int my_putnbr(int nbr);
int my_putstr(char const *str);
int nbr_mot(char *str);
void free_array(char **arr);

#endif /* MINI */
