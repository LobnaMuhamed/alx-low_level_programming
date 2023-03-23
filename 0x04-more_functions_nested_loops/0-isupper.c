#include "main.h"

int _isupper(int c)
{
	char ch;

	_putchar(ch);
	_putchar(':');
	if (ch >= 'A' && ch <= 'Z')
	{
		_putchar('1');
		return (1);
	}

	else 
		return ('0');

}
