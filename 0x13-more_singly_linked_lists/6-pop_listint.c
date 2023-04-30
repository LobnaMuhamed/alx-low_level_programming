#include "lists.h"

/**
 * pop_listint - a function that deletes the header node
 * @head: a pointer for the first element
 * Return: the head node data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head)
	{
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	}
	return (n);
}
