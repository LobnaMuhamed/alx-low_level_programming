#include "lists.h"
/**
 * free_dlistint - a function that frees list
 * @head: a pointer to the first node
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
