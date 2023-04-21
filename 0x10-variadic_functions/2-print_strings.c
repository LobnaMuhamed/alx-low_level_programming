#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: input separator
 * @n: input value
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list names;
	char *str;
	unsigned int i;

	va_start(names, n);

	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(names, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
}
