#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  a function that prints all natural numbers from n to 98
 * @n: input value
*/

void print_to_98(int n)
{
	int i;

	for (i = n ; i != 98 ;)
	{
		if (i < 98)
		{
			printf("%d ,", i++);
		}
		else if (i > 98)
		{
			printf("%d ,", i--);	
		}
	}
	printf("98");
	printf("\n");
}
