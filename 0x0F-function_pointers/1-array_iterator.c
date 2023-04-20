#include "function_pointers.h"

/**
* array_iterator -  a function that executes a function given as a parameter
* @array: array of elements
* @size: size of array
* @action: a pointer to function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;


	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
