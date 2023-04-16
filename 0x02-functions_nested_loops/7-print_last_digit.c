#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: input value
 * Return: return value
*/

int print_last_digit(int n)
{
	int num;

	num = n % 10;
	if (num < 0)
		num *= -1;

	_putchar(num + '0');
	return (num);

}
