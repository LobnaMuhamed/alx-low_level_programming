#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: a pointer of the first node
 * Return: return the size of the list that was free’d
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	listint_t *arr[1024];
	size_t len = 0, i;

	while (*h)
	{
		for (i = 0; i < len ; i++)
			if (arr[i] == *h)
			{
				*h = NULL;
				return (len);
			}
		arr[len] = *h;
		len++;

		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
	return (len);
}
