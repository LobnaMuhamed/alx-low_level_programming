#include "main.h"

/**
 * print_alphabet_x10- print alphabet 10 times
 */

void print_alphabet_x10(void)
{

	char ch;

	for (int num = 0 ; num < 10 ; num++)
	{
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
		_putchar(ch);
	}
}
