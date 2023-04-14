#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 (Succesful)
*/

int main(void)
{
	char x = 'a';
	char n = 'A';
	int i;

	for (i = 0 ; i < 52 ; i++)
	{
		if (x >= 'a' && x <= 'z')
		{
			putchar(x);
			x++;
		}
		if (n >= 'A' && n <= 'Z')
		{
			putchar(n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}
