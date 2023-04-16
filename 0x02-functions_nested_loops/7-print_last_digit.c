#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: input value
 * Return return value
*/

int print_last_digit(int n)
{
	int num;

	num = n;
	if (n > 9)
		num = n % 10;

	if (n > 99)
	{
		num = n / 10;
		num = n % 10;
	}
	_putchar(num + '0');
	return (num);

}
