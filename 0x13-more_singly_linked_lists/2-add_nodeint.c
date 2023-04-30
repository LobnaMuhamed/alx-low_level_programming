#include "lists.h"

/**
 * add_nodeint - a function that adds a a new node
 * @head: first node
 * @n: int value
 * Return: return the address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
