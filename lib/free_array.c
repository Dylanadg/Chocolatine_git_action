/*
** EPITECH PROJECT, 2024
** free_array.c
** File description:
** fct for free a char **
*/

#include "mini_sh.h"

void free_array(char **arr)
{
    int i = 0;

    if (arr == NULL)
        return;
    while (arr[i] != NULL) {
        free(arr[i]);
        i++;
    }
    free(arr);
}
