#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	long num = 612852475143;
	int count;

	for (count = 2 ; num > 1 ; count++)
	{
		while (num % count == 0)
		{
			printf("%d", count);
			num = num / count ;

		}
	}


	return (0);
}
