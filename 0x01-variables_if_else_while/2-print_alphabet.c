#include <stdio.h>

/**
 * main _ Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		purchar(ch);
		ch++;
	}
	return (0);
}

