/*
** EPITECH PROJECT, 2019
** dimension
** File description:
** dimension of the rush1-model
*/

#include "../tools.h"

int height(char *buff)
{
    int i = 0;

    for (int j = 0; buff[j] != '\0'; j++) {
        if (buff[j] == '\n')
            i++;
    }
    return i;
}

int width(char *buff)
{
    int i = 0;

    for(;buff[i] != '\n'; i++);
    return i;
}
