/*
** EPITECH PROJECT, 2019
** function
** File description:
** function usefull for rush3
*/

#include "../tools.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    for (; *str != '\0'; str++)
        my_putchar(*str);
}

int spe_case(int nb)
{
    if (nb < 0){
        nb = -nb;
        my_putchar('-');
    }
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        nb = 147483648;
    }
    return nb;
}

int my_put_nbr(int nb)
{
    nb = spe_case(nb);
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    else
        my_putchar(nb + '0');
    return 0;
}
