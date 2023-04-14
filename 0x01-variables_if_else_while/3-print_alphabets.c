#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 (Succesful)
*/

int main(void)
{
	char x, n;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
	}
	for (n = 'A' ; n <= 'Z' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
