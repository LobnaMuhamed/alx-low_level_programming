#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: input number
 * Return: the value of the last digit
 */
int print_last_digit(int num)
{
	int ls;

	ls = num % 10;
	if (ls < 0)
	{
		ls *= -1;
	}
	_putchar(ls + '0');
	return (ls);
}
