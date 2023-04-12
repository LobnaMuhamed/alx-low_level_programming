#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: input value
 * @c: input value
 * Return: return 0
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	ch = malloc(sizeof(char) * size);

	if (size == 0 || ch == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < size ; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
