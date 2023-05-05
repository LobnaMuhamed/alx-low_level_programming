#include "main.h"

/**
 * pown - get 2 raised to the power i
 * @num: input value
 * @i: input value
 * Return: return the result
*/

unsigned int pown(unsigned int num, unsigned int i)
{
	unsigned int j = 0, result = 1;

	while (j < i)
	{
		result *= num;
		j++;
	}
	return (result);
}

/**
 * print_binary -  a function that prints the binary representation of a number
 * @n: input value
*/

void print_binary(unsigned long int n)
{
	int i, num_bits = 0;
	unsigned long int num, temp = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (!n)
	{
		_putchar('0');
	}
	while (temp > 0)
	{
		temp >>= 1;
		num_bits++;
	}
	for (i = num_bits - 1 ; i >= 0 ; i--)
	{
		num = pown(2, i);
		if (n >= num)
		{
			_putchar('1');
			n -= num;
		}
		else
		{
			_putchar('0');
		}
	}
}
