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
	printf("%d, ", x);
	printf("%d, ", j);
	for (i = 3 ; i <= 50 ; ++i)
	{
		if (i == 50)
			printf("%d", y);
		else
			printf("%d, ", y);
		x = j;
		j = y;
		y = x + j;
	}
	return (0);
}
