#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	short int b;
	long int c;
	long long d;
	char e;
	float y;
	printf("size of signed int %d", (signed long)sizeof(a));
	printf("size of signed short int %d \n", (signed short)sizeof(b));
	printf("size of signed long int %ld \n", (signed long)sizeof(c));
	printf("size of signed long long int %lld \n", (signed long long)sizeof(d));
	printf("size of unsigned char %u \n", (unsigned long)sizeof(e));
	printf("Size of a float: %lu \n", (unsigned long)sizeof(f));
	return (0);
}
