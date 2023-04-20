#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -  a function that prints a name
 * @name: input value
 * @f: input value
 * #n: input value
*/

void print_name(char *name, void (*f)(char *n))
{
	if (name == NULL || f == NULL)
		return;
	f(name);

}
