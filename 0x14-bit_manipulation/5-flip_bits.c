#include "main.h"

/**
 * flip_bits -  the number of bits you would need to flip to get from one number to another
 * @n: input value
 * @m: input value
 * Return: return number of bits
*/


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip_num;
	unsigned int count = 0;

	flip_num = n ^ m;

	for (count = 0 ; flip_num ; count++)
	{
		flip_num = flip_num & (flip_num - 1);
	}
	return (count);
}
