#include <stdlib.h>
#include "lists.h"

/**
 * print_list -  a function that prints all the elements of a list_t list
 * @h: head pointer
 * Return: number of elements
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;
	char *s1 = "[0] (nil)";

	if (h == NULL)
		return (0);

	while (h)
	{
		if (h->str == NULL)
		{
			while (*s1)
			{
				_putchar(*s1);
				s1++;
			}
			_putchar('\n');
		}
		else
		{
			_putchar('[');
			_putchar(h->len);
			_putchar(']');
			_putchar(' ');
			while (h->str)
			{
				_putchar(*(h->str));
			}
			_putchar('\n');
		}
		h = h->next;
		n++;
	}
	return (n);
}
