#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1045420835);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    printf("Print 954312 :- \n");
    print_binary(954372342312);
    printf("\nPrint 954372342313 :- \n");
    print_binary(954372342313);
    printf("\nPrint ULONG_MAX :- \n");
    print_binary(ULONG_MAX);
    printf("\n");
    return (0);
}
