#include <stdio.h>

/**
 * main - Entry point
 * @argc: input value
 * @argv: input value
 * Return: ALways 0 (successful)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
