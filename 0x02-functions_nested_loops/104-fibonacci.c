#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 (Successful)
*/

int main(void)
{
	unsigned long int i, x, y, k;

	x = 0;
	y = 1;
	for (i = 0 ; i < 98 ; ++i)
	{
		k = x + y;
		printf("%lu, ", k);
		x = y;
		y = k;
	}
	return (0);

}
