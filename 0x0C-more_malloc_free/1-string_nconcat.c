#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: input value
 * @s2: input value
 * @n: input value
 * Return: return pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *ch;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}
	if (n < len2)
	{
		ch = malloc(len1 + n + 1);
	}
	else
	{
		ch = malloc(len1 + len2 + 1);
	}
	if (ch == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		ch[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
	{
		ch[i] = s2[j];
		i++;
		j++;
	}
	ch[i] = '\0';

	return (ch);

}
