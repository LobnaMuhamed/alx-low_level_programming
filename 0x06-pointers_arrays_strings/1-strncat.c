#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: Void
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
