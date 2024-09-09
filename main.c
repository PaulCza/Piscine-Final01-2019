/*
** EPITECH PROJECT, 2019
** main
** File description:
** main give for rush3
*/

#include "tools.h"

int main(void)
{
    char buff [BUFF_SIZE + 1];
    int offset = 0;
    int len ;

    while ((len = read(0 , buff + offset , BUFF_SIZE - offset)) > 0)
        offset = offset + len;
    buff[offset] = '\0';
    if (len < 0)
        return 84;
    if (my_strlen(buff) < 1)
        return 84;
    mod(buff, width(buff), height(buff));
    return 0;
}
