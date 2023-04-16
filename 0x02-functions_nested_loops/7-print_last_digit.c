#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: input value
 * Return return value
*/

int print_last_digit(int n)
{
	int num;

	num = ((n % 10) + '0');
	_putchar(num);
	return (num);

}
