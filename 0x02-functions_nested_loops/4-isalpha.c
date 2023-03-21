#include "main.h"

/**
 * int _isalpha- a function checks if c is an alphabet or not
 * @c: single letter input
 *Return: 1 if c is a letter, lowercase or uppercase
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
