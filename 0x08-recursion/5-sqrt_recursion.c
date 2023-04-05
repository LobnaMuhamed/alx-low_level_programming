#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square
 * @n: input value
 * Return: return value
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else 
	{
		return (_sqrt_recursion(n - 1) + n + n - 1);
	}
}
