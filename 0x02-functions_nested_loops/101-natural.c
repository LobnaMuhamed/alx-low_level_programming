#include "main.h"
#include <stdio.h>

/**
 * main - Entr point
 * Return: return 0 (Successful)
*/

int main(void)
{
	long int num, i, sum = 0;

	num = 1024;

	for (i = 1 ; i < num ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%ld\n", sum);
	return (0);

}
