#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head: a pointer for the first element
*/

void free_listint(listint_t *head)
{
	listint_t *new = head;

	while (head)
	{
		new = new->next;
		free(head);
		head = new;
	}
}
