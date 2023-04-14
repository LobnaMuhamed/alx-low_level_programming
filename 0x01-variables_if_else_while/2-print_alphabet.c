#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 (Successfull)
*/

int main(void)
{
	char ch = 'a';
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
