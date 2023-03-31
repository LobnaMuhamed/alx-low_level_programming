#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: input value
*/

void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
	}
	while (n / 10 != '0')
	{
		n = n / 10;
	}
	_putchar(n % 10 + '0');
}
