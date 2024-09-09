/*
** EPITECH PROJECT, 2019
** display
** File description:
** display the corresponding rush
*/

#include "../tools.h"

void display(int nb, int wi, int he)
{
    my_putstr("[rush1-");
    my_put_nbr(nb);
    my_putstr("] ");
    my_put_nbr(wi);
    my_putchar(' ');
    my_put_nbr(he);
}
