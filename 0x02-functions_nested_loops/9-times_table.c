#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int x, y, m = 0;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			m = x * y;
			if (y != 0)
			{
				_putchar(' ');
				if (m <= 9)
					_putchar(' ');
			}

			if (m > 9)
				_putchar((m / 10) + '0');

			_putchar((m % 10) + '0');

			if (y != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
