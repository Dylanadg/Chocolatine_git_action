/*
** EPITECH PROJECT, 2024
** my_str_to_word_array.c
** File description:
** ndzionad
*/

#include <mini_sh.h>

int nbr_mot(char *str_to_copy)
{
    char *strtoken;
    char *str = malloc((my_strlen(str_to_copy) + 1) * sizeof(char));
    int count = 0;
    char *separator = " \t";

    my_strcpy(str, str_to_copy);
    strtoken = strtok(str, separator);
    if (strtoken == NULL) {
        return 0;
    }
    while (strtoken != NULL) {
        count++;
        strtoken = strtok(NULL, separator);
    }
    free(str);
    return count;
}

char **my_str_to_word_array(char *str)
{
    char **arr = malloc((nbr_mot(str) + 1) * sizeof(char *));
    int i = 0;
    int y = 0;
    int k = 0;

    while (str[k] != '\0') {
        arr[i] = malloc((my_strlen(str) + 1) * sizeof(char));
        while (str[k] == ' ' || str[k] == '\t')
            k++;
        y = 0;
        while (str[k] != ' ' && str[k] != '\0' && str[k] != '\t') {
            arr[i][y] = str[k];
            k++;
            y++;
        }
        arr[i][y] = '\0';
        i++;
    }
    arr[i] = NULL;
    return (arr);
}
