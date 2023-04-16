#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 (Successful)
*/

int main(void)
{
	int x;

	for (x = 0 ; x < 50 ; x++)
	{
		printf("%d, ", x + x);
	}
	return (0);
}
