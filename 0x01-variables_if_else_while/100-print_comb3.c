#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 (Successful)
*/

int main(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = i + 1 ; j <= 9 ; j++)
		{
			if (i == j)
				continue;
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

