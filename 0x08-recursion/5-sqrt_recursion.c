#include "main.h"

int f_sqrt(int n, int i);

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
		return (f_sqrt(n, 0));
}
/**
 * f_sqrt - a function that recursive number
 * @n: input value
 * @i: input value
 * Return: return value
*/
int f_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (f_sqrt(n, i + 1));
}
