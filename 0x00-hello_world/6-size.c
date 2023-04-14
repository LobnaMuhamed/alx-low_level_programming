#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 (Successful)
*/

int main(void)
{
	char ch;
	int n;
	long int y;
	long long int x;
	float d;

	printf("Size of a char: %d byte(s)\n", sizeof(ch));
	printf("Size of an int: %d byte(s)\n", sizeof(n));
	printf("Size of a long int: %d byte(s)\n", sizeof(y));
	printf("Size of a long long int: %d byte(s)\n", sizeof(x));
	printf("Size of a float: %d byte(s)\n", sizeof(d));
	return (0);


}
