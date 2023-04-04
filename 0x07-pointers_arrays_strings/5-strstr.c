#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: input value
 * @needle: input value
 * Return: return value
*/

char *_strstr(char *haystack, char *needle)
{

	while (*haystack)
	{
		char *s = haystack;
		char *k = needle;

		while (*s == *k && *k != '\0')
		{
			s++;
			k++;
		}
		if (*k == '\0')
			return (haystack);
		haystack++;
	}
	return(0);

}
