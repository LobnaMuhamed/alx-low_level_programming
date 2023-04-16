#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 (Successful)
*/

int main(void)
{
	int x, y;

	for (x = 0 ; x < 50 ; x++)
	{
		for (y = x ; y < 50 ; y++)
		{
			printf("%d, ", x + y);
		}
	}
}
