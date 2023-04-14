#include "main.h"
#include <stdio.h>

/**
 * array_range - a function that creates an array of integers
 * @min: input value
 * @max: input value
 * Return: return value
*/


int *array_range(int min, int max)
{
	int *num, i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	num = malloc(sizeof(int) * len);

	if (num == NULL)
		return (NULL);

	for (i = 0 ; min <= max ; i++)
	{
		num[i] = min++;
	}
	return (num);


}
