#include "main.h"
#include <stdio.h>
/**
 * print_name -  a function that prints a name
 * @name: input value
 * @f: input value
 * #n: input value
*/
void f(char *n)
{
	printf("%s", n);	
}
void print_name(char *name, void (*f)(char *n))
{
	f(name);

}
