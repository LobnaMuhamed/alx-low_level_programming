#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * @a: input value
 * @size: input value
*/

void print_diagsums(int *a, int size)
{
	int i, j = 0, k = 0;

	for (i = 0 ; i < size ; i++)
	{
		j = j + a[i * size + i];
	}
	for (i = size - 1 ; i >= 0 ; i--)
	{
		k = k + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n" , j , k);
}
