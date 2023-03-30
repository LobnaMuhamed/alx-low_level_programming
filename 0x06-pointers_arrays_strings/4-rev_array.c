#include "main.h"

/**
 * reverse_array -  a function that reverses the content of an array
 * @a: input value
 * @n: input value
*/


void reverse_array(int *a, int n)
{
	int i, k;

	for (i = 0 ; i <= n-- ; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}
