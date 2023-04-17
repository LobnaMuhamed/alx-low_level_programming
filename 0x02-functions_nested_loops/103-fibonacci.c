#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 (Successful)
*/

int main(void)
{
	unsigned long int x, y, k, i, sum;

	sum = 0;

	x = 0;
	y = 1;
	for (i = 0 ; i < 50 ; ++i)
	{
		k = x + y;
		if (k % 2 == 0 && k < 4000000)
			sum += k;
		x = y;
		y = k;
	}
	printf("%lu\n", sum);
	return (0);
}
