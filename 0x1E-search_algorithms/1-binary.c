#include "search_algos.h"

/**
 * binary_search - searching for value in sorted array using the Binary search
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the index where value is located or -1
*/

int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, i;

	if (!array || size == 0)
		return (-1);
	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; ++i)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
