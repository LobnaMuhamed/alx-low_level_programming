#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main()
{
	char* strings[] = {"hetairas", "mentioner", "heliotropes", "neurospora", 
		"depravement", "serafins", "stylist", "subgenera", 
		"joyful", "synaphea", "redescribed", "urites", "dram", 
		"vivency"};

	int num_strings = sizeof(strings) / sizeof(strings[0]);

	unsigned long hash_table[100000] = {0}, hash_value;
	int i;

	for (i = 0; i < num_strings; i++)
	{
		hash_value = hash_djb2((unsigned char*)strings[i]);
		if (hash_table[hash_value])
		{
			printf("Collision detected: %s collides with %s\n", strings[i], (char*)hash_table[hash_value]);
		}
		else
		{
			hash_table[hash_value] = (unsigned long)strings[i];
		}
	}

	return 0;
}
