#include "main.h"

/**
 **/

void times_table(void) 
{ 
	int row, col, result;

	for (row = 0 ; row <= 9 ; row++)
	{
		for (col = 0 ; col <= 9 ; col++)
		{
			result = row * col;
			if (result > 9){
				_putchar((result / 10) + '0');
			}
			else if (result <= 9 && result != 0)
			{
				_putchar(' ');
			}
			_putchar((result % 10) + '0');
			if(col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
