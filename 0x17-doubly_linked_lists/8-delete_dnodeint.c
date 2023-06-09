#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes the node
 * @head: a pointer to first node
 * @index: input index
 *
 * Return: return 1 if succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *prev;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index)
		{
			prev = temp->prev;
			prev->next = temp->next;
			temp->next->prev = prev;
			free(temp);
			return (1);
		}
		else
		{
			i++;
			temp = temp->next;
		}
	}
	return (-1);
}
