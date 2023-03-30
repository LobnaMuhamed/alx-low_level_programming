#include "main.h"

/**
 * *string_trouper - a function that changes all lowercase letters to uppercase
 * *: input value
*/

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if(n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
