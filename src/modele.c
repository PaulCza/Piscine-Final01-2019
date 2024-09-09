/*
** EPITECH PROJECT, 2019
** modele
** File description:
** modele of the rush 1
*/

#include "../tools.h"

void last_case(char *buff, int wi, int he)
{
    int size = my_strlen(buff);

    if (buff[size - 2] == 'A' && buff[0] == 'A' && buff[wi - 1] == 'C')
        display(5, wi, he);
    else if (buff[size - 2] == 'C' && buff[0] == 'A' && buff[wi - 1] == 'C')
        display(4, wi, he);
    else
        display(3, wi, he);
}

void mult_solu(int wi, int he)
{    
    display(3, wi, he);
    my_putstr(" || ");
    display(4, wi, he);
    my_putstr(" || ");
    display(5, wi, he);
}

void mod(char *buff, int wi, int he)
{
    int fsign = buff[0];

    switch (fsign) {
    case '*':
        display(2, wi, he);
        break;
    case '/':
        display(2, wi, he);
        break;
    case 'o':
        display(1, wi, he);
        break;
    case 'B':
        mult_solu(wi, he);
        break;
    default:
        last_case(buff, wi, he);
    }
    my_putchar('\n');
}
