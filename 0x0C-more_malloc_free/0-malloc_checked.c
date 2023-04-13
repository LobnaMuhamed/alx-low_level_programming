#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: input value
*/


void *malloc_checked(unsigned int b)
{

	int *s = malloc(sizeof *s * b);

	if (s == NULL)
	{
		*s = 98;
	}
	return (s);
}
