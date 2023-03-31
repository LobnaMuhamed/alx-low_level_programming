#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: input value
*/

void print_number(int n)
{

	unsigned int m;

	m = n;
	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	while (m / 10 != '0')
	{
		m = m / 10;
	}
	_putchar(m % 10 + '0');
}
