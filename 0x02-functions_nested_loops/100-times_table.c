#include "main.h"
#include <stdio.h>

/**
 * print_times_table - a function that prints the n times table
 * @n: input value
*/

void print_times_table(int n)
{
	int i, j, m;

if (!(n > 15 || n < 0))
{
	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
		m = i * j;
		if (j != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (m < 10 && j != 0)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(m % 10 + '0');
		}
		else if (m >= 10 && m <= 99)
		{
			_putchar(' ');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
		}
		else if (m > 99)
		{
			_putchar(m / 100 + '0');
			_putchar((m / 10) % 10 + '0');
			_putchar(m % 10 + '0');
		}
		else
			_putchar(m % 10 + '0');
		}
		_putchar('\n');

	}
}
}
