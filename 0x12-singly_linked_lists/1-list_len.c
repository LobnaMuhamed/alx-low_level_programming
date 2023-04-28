#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked
 * @h: head pointer
 * Return: return n
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
