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
		putchar(ch);
		ch++;
		if (ch == 'z')
		{
			putchar("%c\n", ch);
		}
	}
	return (0);
}

