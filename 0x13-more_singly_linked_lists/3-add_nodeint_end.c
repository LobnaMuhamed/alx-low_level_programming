#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 * @head: head pointer
 * @n: input value
 * Return: return pointer to the new
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp = *head;


	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}


	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);
}
