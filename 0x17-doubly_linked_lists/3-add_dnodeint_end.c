#include "lists.h"
/**
 * add_dnodeint_end - a function that adds node at end
 * @head: a pointer to first node
 * @n: input data
 *
 * Return: return address of new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	temp = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (!(*head))
	{
		*head = new_node;
		(*head)->prev = NULL;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	new_node->prev = temp;
	return (new_node);
}
