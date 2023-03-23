#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers
*/

void more_numbers(void)
{
	int x, j;

	for (x = 1 ; x <= 10 ; x++)
	{
		for  (j = 0 ; j <= 14 ; j++)
		{
			if (j > 9)
			{	
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
