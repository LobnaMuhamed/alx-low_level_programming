#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node at give position
 * @h: a pointer to first node
 * @idx: input int
 * @n: input data
 *
 * Return: address of the inserting node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int i;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	if (temp)
		
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	temp = *h;
	while (i < idx && temp)
	{
		i++;
		temp = temp->next;
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	temp = new_node;
	return (new_node);
}
