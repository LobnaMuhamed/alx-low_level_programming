#include "main.h"
int prime_number(int n, int i);

/**
 * is_prime_number -  a function that returns 1
 * @n: input value
 * Return: return 1 or 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return(prime_number(n, n - 1));
}

/**
 * prime_number - a function that return numbr
 * @n: input value
 * @i: input value
 * Return: return 1 if it's prime
*/
int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return(prime_number(n, i - 1));
}
