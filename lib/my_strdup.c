/*
** EPITECH PROJECT, 2024
** my_strdup
** File description:
** sqdsqd
*/

#include <string.h>
#include <mini_sh.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0'){
        dest[i] = src[i];
        i ++;
    }
    dest[i] = '\0';
    return (dest);
}
