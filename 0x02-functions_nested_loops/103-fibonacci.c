#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 (Successful)
*/

int main(void)
{
	unsigned long long int x, y, k, i;

	x = 1;
	y = 2;
	for (i = 0 ; i < 4000000 ; ++i)
	{
		k = x + y;
		printf("%llu", k);
		x = y;
		y = k;
	}
	return (0);
}
