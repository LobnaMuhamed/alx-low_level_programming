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
			result = row + col;
			_putchar(col + '0');
		
		}
		_putchar('\n');
	}
}