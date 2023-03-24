#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line
 *
 * @size: is the size of the triangle
*/


void print_triangle(int size)
{
	int i, j, k;

	for (i = 0 ; i <= size ; i++)
	{
		for (j = size - i ; j > 0 ; j--)
		{
			_putchar(' ');
		}
		for (k = 1 ; k <= i ; k++)
		{
			_putchar('#');
		}
		_putchar(' ');
		_putchar('\n');
	}
}
