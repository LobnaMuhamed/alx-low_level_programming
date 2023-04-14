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

	printf("Size of a char: %d byte(s)", sizeof(ch));
	printf("Size of an int: %d byte(s)", sizeof(n));
	printf("Size of a long int: %ld byte(s)", sizeof(y));
	printf("Size of a long long int: %lld byte(s)", sizeof(x));
	printf("Size of a float: %f byte(s)", sizeof(d));
	return (0);


}
