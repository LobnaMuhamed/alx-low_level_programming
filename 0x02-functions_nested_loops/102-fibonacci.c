#include "stdio.h"

/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
*/

int main(void)
{

	unsigned long count, i, j, k;

	for (count = 0 ; count < 50 ; count++)
	{
		k = i + j;
		i = j;
		j = k;
		if (count == 49)
		{
			putchar('\n');
		}
		else
			printf(', ');
	}




}
