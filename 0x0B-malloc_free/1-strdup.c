#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer to a newly allocated space
 * @str: input value
 * Return: return char
*/

char *_strdup(char *str)
{
	int i, j, k;

	char *ch;

	if (str == NULL)
	{
		return (NULL);
	}

	j = 0;

	for (k = 0 ; str[k] <= '\0' ; k++)
	{
		j++;
	}

	ch = malloc(sizeof(char) * j);

	for (i = 0 ; str[i] ; i++)
	{
		ch[i] = str[i];
	}
	return (ch);
}
