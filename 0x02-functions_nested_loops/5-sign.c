#include "main.h"

/**
 * print_sign- function that prints the sign of a number
 * @n: single letter input
 * Returns: 1 and prints + if n is greater than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar(',');
	_putchar(' ');
	_putchar(n);

}
