#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: input value
 * @c: input value
 * Return: return location of character
*/

char *_strchr(char *s, char c)
{
	int i, j;
	char *p;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			for (j = i ; s[j] != '\0' ; j++)
			{
				p[j] = s[j];
			}
			break;
		}
		else if (s[i] != c)
		{
			continue;
		}
	}
	return (p);
}
