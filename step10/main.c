/*
** EPITECH PROJECT, 2023
** wordkshop valgrind
** File description:
** main
*/

#include "../include/my.h"

int main()
{
    int* tableau = (int*)malloc(4 * 4 * sizeof(int));

    for (int i = 0; i <= 4; ++i)
        for (int j = 0; j <= 4; ++j)
            tableau[i * 4 + j] = i + j;
    for (int i = 0; i <= 4; ++i)
        for (int j = 0; j <= 4; ++j)
            printf("%d ", tableau[i * 4 + j]);
        printf("\n");
    free(tableau);
    return 0;
}
