#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: character input
*/

void rev_string(char *s)
{
	int length = 0, i;

	char rev = s[0];

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0 ; i < length ; i++)
	{
		length--;
		rev = s[i];
		s[i] = s[length];
		s[length] = rev;
	}
}
