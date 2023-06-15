#include "lists.h"
/**
 * dlistint_len - a function that return length
 * @h: a pointer to first node
 *
 * Return: return length of list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
