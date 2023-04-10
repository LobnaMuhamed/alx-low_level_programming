#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: input value
 * @argv: input value
 * Return: return 0 (successful)
*/


int main(int argc, char *argv[])
{
	int i, sum = 0, c;

	for (i = 1 ; i < argc ; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			c = atoi(argv[i]);
			sum += c;
		}
	}
	printf("%d\n", sum);
	return (0);
}
