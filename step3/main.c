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
    free(foo);
    return 0;
}
