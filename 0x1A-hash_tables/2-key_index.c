#include "hash_tables.h"
/**
 * key_index - a function that gives the index of a key
 * @key: is the key
 * @size: the size of array of hash table
 *
 * Return: this index at which the key\value pair should be stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	else
		return (hash_djb2(key) % size);
}
