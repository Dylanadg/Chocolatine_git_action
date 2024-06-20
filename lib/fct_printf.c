/*
** EPITECH PROJECT, 2023
** fct_printf
** File description:
** fct printf affichage
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putnbr(int nbr)
{
    int compt = 0;

    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr - (nbr * 2);
        compt ++;
    }
    if (nbr / 10) {
        compt = my_putnbr(nbr / 10);
    }
    my_putchar(nbr % 10 + '0');
    compt ++;
    return compt;
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i = i +1;
    }
    return i;
}
