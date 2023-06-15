#include "lists.h"
/**
 * add_dnodeint - a function that add not at the first
 * @head: a pointer at the first node
 * @n: input data
 *
 * Return: return address of the first node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!(*head))
	{
		*head = new_node;
		return (*head);
	}
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
