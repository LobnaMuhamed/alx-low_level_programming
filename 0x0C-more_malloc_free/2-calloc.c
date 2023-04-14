#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _fun - a function that allocates memory for an array
 * @ch: input value
 * @k: input value
 * @i: input value
 * Return: return value
*/
void *_fun(char *ch, char k, unsigned int i)
{
	unsigned int j;

	for (j = 0 ; j < i ; j++)
	{
		ch[j] = k;
	}
	return (ch);
}
/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: input value
 * @size: input value
 * Return: return value
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ch;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ch = malloc(nmemb * size);

	if (ch == NULL)
		return (NULL);
	_fun(ch, 0, size * nmemb);
	return (ch);
}
