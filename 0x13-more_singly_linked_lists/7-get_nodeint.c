#include "lists.h"

/**
 * get_nodeint_at_index - get nth node of list
 * @head: a pointer of the first element in list
 * @index: input value
 * Return: return nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	listint_t *temp = head;

	for (i = 0 ; temp && i < index ; i++)
	{
		temp = temp->next;
	}
	return (temp ? temp : NULL);
}
