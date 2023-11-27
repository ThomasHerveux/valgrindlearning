/*
** EPITECH PROJECT, 2023
** wordkshop valgrind
** File description:
** main
*/

#include "../include/my.h"

int main()
{
    char arr[] = "Hello World";
    int value = arr[42];
    int i = 2;
    int counter = 0;

    printf("Value in tab:\n");
    for (; counter <= 13; i++, counter++)
        arr[i] += 1;
        printf("%c\n", arr[i]);
    printf("Value: %d\n", value);
    return 0;
}
