#include "lists.h"

/**
 * insert_nodeint_at_index - a function that insert a new node
 * @head: a pointer for the first element
 * @idx: the index of the list
 * @n: input value
 * Return: return address of new node or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp = *head;


	new->n = n;

	if (*head == NULL || new == NULL)
		return (NULL);
	
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new)
	}
	for (i = 0 ; i < idx - 1 && temp ; i++)
	{
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);

}
