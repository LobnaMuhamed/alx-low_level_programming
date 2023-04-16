#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 (Successful)
*/


int main(void)
{
	int i, x, j, y;

	x = 0;
	j = 1;
	printf("%d ", x);
	printf("%d ", j);
	for (i = 3 ; i <= 50 ; ++i)
	{
		y = x + j;
		printf("%d ", y);
		x = j;
		j = y;
	}
	return (0);
}
