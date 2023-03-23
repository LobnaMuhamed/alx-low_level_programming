#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
        if (n < 0 || n == 0)
        {
                _putchar('\n');
        }
        else
        {
                int i;

                for (i = 0 ; i < n ; i++)
                {
                        _putchar('\');
                }
                _putchar('\n');
        }	

}
