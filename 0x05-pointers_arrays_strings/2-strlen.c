#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: character input
 * Return: returns the length of a string.
*/

int _strlen(char *s)
{

	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);


}
