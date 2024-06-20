/*
** EPITECH PROJECT, 2024
** my_strcmp.c
** File description:
** compare 2 string to say if the same
*/

#include "mini_sh.h"

int my_strcmp(char *str1, char *str2)
{
    int i = 0;

    if (str1 == NULL || str2 == NULL || my_strlen(str1) != my_strlen(str2)) {
        return 1;
    }
    while (i <= my_strlen(str1)) {
        if (str1[i] != str2[i]) {
            return 1;
        }
        i++;
    }
    return 0;
}
