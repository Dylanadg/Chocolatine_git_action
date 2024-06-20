/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** mini printf
*/

#include <stdarg.h>
#include <mini_sh.h>

int printf_para(const char *format, int compt, va_list ap)
{
    switch (*format) {
    case 'd':
    case 'i':
        compt = compt + my_putnbr(va_arg(ap, int));
        return compt;
    case 's':
        compt = compt+ my_putstr(va_arg(ap, char *));
        return compt;
    case 'c':
        my_putchar(va_arg(ap, int));
        return compt + 1;
    case '%':
        my_putchar('%');
        return compt + 1;
    }
    return -1;
}

int my_printf(const char *format, ...)
{
    va_list ap;
    int compt = 0;

    va_start(ap, format);
    while (*format) {
        if (*format == '%') {
            format ++;
            compt = printf_para(format, compt, ap);
        } else {
            my_putchar(*format);
            compt ++;
        }
        format ++;
    }
    va_end(ap);
    return compt;
}
