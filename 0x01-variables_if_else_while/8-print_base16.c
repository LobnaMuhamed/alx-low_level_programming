#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num = '0';

	while (num <= '16')
	{
		putchar("%x", num);
		num++;
	}
	putchar('\n');
	return (0);
}