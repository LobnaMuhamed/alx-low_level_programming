#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 (Successful)
*/

int main(void)
{
	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0 ; ch[i] != '\0';i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (1);
}
