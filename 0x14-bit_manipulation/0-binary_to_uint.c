#include "main.h"
#include <string.h>

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
* binary_to_uint - a function that converts a binary number to an unsigned int
* @b: is pointing to a string of 0 and 1 chars
* Return: return the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int num = 0;

	if (!b)
	{
		return (0);
	}

	while (b[len] != '\0')
	{
		len++;
	}
	for (i = len - 1 ; i >= 0 ; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num += ((b[i] - '0') * pown(2, len - i - 1));
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
