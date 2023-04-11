#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: input value
 * @argv: input value
 * Return: return 0 (successful)
*/

int main(int argc, char *argv[])
{
	int n, i, count = 0;
	int nums[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Erroe\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= nums[i])
		{
			count++;
			n -= nums[i];
		}
	}

	printf("%d\n", count);
	return (0);
}
