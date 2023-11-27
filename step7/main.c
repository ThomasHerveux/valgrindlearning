/*
** EPITECH PROJECT, 2023
** wordkshop valgrind
** File description:
** main
*/

#include "../include/my.h"

int main()
{
    char *data = (char *)malloc(sizeof(char) * 10);

    for (int i = 0; data[i] != '\0'; i++) {
        data[i] = i + 65;
        printf("%c\n", data[i]);
    }
    return 0;
}
