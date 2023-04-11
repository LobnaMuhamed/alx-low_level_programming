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
	int i = 1, sum = 0, c = 0, j;
	char *s;

	while (i < argc)
	{
	s = argv[i];
	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] < '0' || s[j] > '9')
		{
		printf("Error\n");
		return (1);
		}
		j++;
	}
	i++;

	}
		for (i = 1 ; i < argc ; i++)
		{
			c = atoi(argv[i]);
			sum += c;
		}
		printf("%d\n", sum);
	return (0);
}
