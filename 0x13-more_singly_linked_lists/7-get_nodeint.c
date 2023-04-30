#include "lists.h"
/**
 * listint_t - get nth node of list
 * @head: a pointer of the first element in list
 * @index: input value
 * Return: return nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, j = 0;

	listint_t *temp = head;

	while (head)
	{
		head = head->next;
		j++;
	}
	if (j < index)
		return (NULL);

	for (i = 0 ; i < index ; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
