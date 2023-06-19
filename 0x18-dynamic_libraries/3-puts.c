#include "main.h"

/**
 * _puts -  a function that prints a string, followed by a new line
 * @str: character input
*/

int _puts(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (*s);
}
