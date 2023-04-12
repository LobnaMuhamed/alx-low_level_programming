#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  a function that concatenates two strings
 * @s1: input value
 * @s2: input value
 * Return: return char
*/


char *str_concat(char *s1, char *s2)
{
	int i, j;

	char *ch;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	ch = malloc(sizwof(char) * (i + j + 1));

	if (ch == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		ch[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ch[i] = s2[j];
		i++, j++;
	}
	ch[i] = '\0';
	return (ch);
}
