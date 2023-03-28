#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * @str: integer input
*/

void puts2(char *str)
{
	int length = 0;
	int i = 0, k;
	char *p = str;

	while (*p != '\0')
	{
		p++;
		length++;
	}
	i = length - 1;
	for (k = 0 ; k <= i ; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
