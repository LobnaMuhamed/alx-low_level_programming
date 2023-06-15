#include "lists.h"
/**
 * print_dlistint - a function that print nodes date
 * @h: a pointer head
 *
 * Return: return number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
