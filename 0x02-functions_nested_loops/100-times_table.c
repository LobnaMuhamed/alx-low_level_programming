#include "main.h"


void print_times_table(int n)
{
        int row, col, result;

        for (row = 0 ; row <= n ; row++)
        {
                for (col = 0 ; col <= n ; col++)
                {
                        result = row * col;
			if (result < 9)
			{
				_putchar(result + '0');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(',');
			}
			else if (result > 9 && result < 100 )
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(' ');
				_putchar(' ');
				_putchar(',');
			}
			else if (result > 100)
			{
				_putchar((result / 100) + '0');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			
                }
                _putchar('\n');
        }
}
