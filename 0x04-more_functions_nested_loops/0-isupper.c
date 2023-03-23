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
	char ch = c + '0';

	if (ch >= 'A' && ch <= 'Z')
	{
		return (1);
	}

	else
		return ('0');

}
