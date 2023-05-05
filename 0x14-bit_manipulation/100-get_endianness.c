#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: return 0 if big endians, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int x = 0x24689123;

	if (*(char *)&x == 0x023)
		return (1);
	else
		return (0);
}
