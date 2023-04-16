#include "main.h"
#include <stdio.h>

/**
 * main - Entr point
 * Return: return 0 (Successful)
*/

int main(void)
{
	int num, i, sum = 0;

	num = 1024;

	for (i = 1 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (sum);

}
