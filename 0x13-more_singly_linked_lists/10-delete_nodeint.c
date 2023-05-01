#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: a pointer of the first element
 * @index: input value
 * Return: 1 if succeeded , -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head, *previous = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0 ; i < index && current ; i++)
	{
		previous = current;
		current = current->next;
	}
	previous->next = current->next;
	free(current);
	return (-1);
}
