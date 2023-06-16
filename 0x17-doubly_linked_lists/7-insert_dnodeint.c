#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node
 * @h: a pointer to first node
 * @idx: index input
 * @n: input data
 *
 * Return: return address of node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int i;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		temp = *h;
		i = 0;
		new_node = malloc(sizeof(dlistint_t));
		new_node->n = n;
		if (!new_node)
		{
			return (NULL);
		}
		else
		{
			temp = *h;
			i = 1;
			while (temp && i < idx)
			{
				temp = temp->next;
				if (i == idx)
					if (!temp->next)
						new_node = add_dnodeint_end(h, n);
				i++;
			}
			new_node->next = temp->next;
			temp->next = new_node;
			new_node->prev = temp;
			temp->next->prev = new_node;
		}
	}
	return (new_node);
}
