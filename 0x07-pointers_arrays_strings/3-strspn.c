#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input value
 * @accept: input value
 * Return: return value
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
	}
	return (count);

}
