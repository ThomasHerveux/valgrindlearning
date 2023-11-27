/*
** EPITECH PROJECT, 2023
** wordkshop valgrind
** File description:
** main
*/

#include "../include/my.h"

int main()
{
    char *str = malloc(sizeof(char) * 10);

    for (int i = 0; i < 11; i++)
        str[i] = i + 65;
    
    printf("%s\n", str);
    return 0;
}
