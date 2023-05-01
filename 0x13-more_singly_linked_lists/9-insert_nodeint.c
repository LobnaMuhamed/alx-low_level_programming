#include "lists.h"

/**
 * insert_nodeint_at_index - a function that insert a new node
 * @idx: the index of the list
 * @n: input value
 * Return: return address of new node or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp = *head;


	for (i = 0 ; i < idx ; i++)
	{
		temp = temp->next;
	}
	new->n = n;
	new->next = temp;
	temp = new;
	return(new);

}
