#include "lists.h"
/**
 * get_dnodeint_at_index - return nth node of list
 * @head: a pointet to first node
 * @index: input number
 *
 * Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (i < index && temp)
	{
		temp = temp->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (temp);
}
