#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array of elements
 * @size: size of array
 * @cmp: a pointer of function
 * Return: return -1 if array is null
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);

}
