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
	int i, sum = 0, c = 0;
	
	if (argc > 0){
		for (i = 1 ; i < argc ; i++)
		{
			c = atoi(argv[i]);

			if (!(c > 0))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += c;
			}
		}
	
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", c);
	}
	return (0);
}
