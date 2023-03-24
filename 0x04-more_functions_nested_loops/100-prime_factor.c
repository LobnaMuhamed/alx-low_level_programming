#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	long int num, count;

	for (count = 2 ; num > 1 ; count++)
	{
		while (num % count == 0)
		{
			printf("%ld", count);
			num = num / count;
		}
	}



	return (0);
}
