#include "main.h"


void print_times_table(int n)
{
        int row, col, result;

        for (row = 0 ; row <= n ; row++)
        {
                for (col = 0 ; col <= n ; col++)
                {
                        result = row * col;
                        if (result > n)
                                _putchar((result / 10) + '0');
                        else if (result <= n && col != 0)
                                _putchar(' ');
                        _putchar((result % 10) + '0');
                        if (col != n)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                }
                _putchar('\n');
        }
}
