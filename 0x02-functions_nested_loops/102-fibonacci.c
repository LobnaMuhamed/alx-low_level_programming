#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 (Successful)
*/


int main(void)
{
	unsigned int i, x, j, y;

	x = 0;
	j = 1;
	for (i = 0 ; i < 50 ; ++i)
	{
		y = x + j;
		x = j;
		j = y;
		printf("%lu", y);
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
