#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: charcter input
 *
 * Return: 1 if c uppercase else return 0
*/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
		return (0);

}
