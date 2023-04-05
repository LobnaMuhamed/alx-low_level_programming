#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: input value
 * Return: return value
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);


}
