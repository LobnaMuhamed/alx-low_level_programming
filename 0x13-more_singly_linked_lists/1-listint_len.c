#include "lists.h"

/**
 * listint_len - a function that returns number of elements
 * @h: head pointer
 * Return: return number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
