#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: input value
 * @argv: input value
 * Return: return 0 (successful)
*/

int main(int argc, char *argv[])
{
	int res = 0;

	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
}
