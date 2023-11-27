/*
** EPITECH PROJECT, 2023
** wordkshop valgrind
** File description:
** main
*/

#include "../include/my.h"

int main()
{
    int *foo = malloc(sizeof(int) * 10);

    free(foo);
    foo[0] = 12;
    return 0;
}
