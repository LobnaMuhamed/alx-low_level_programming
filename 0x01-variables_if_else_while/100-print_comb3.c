#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	float num = 0;

	while (num < 90)
	{
		if (num % 10 != num % 1)
		{
			putchar(num);
			if (num != 89)
			{
			putchar(',');
			putchar(' ');
			}
		}
		num++;
	}
	putchar('\n');
	return (0);
}
