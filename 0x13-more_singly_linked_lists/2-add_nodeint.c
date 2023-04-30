#include "lists.h"

/**
 * add_nodeint - a function that adds a a new node
 * @head: first node
 * @n: int value
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	int i;

	listint_t new = (listint_t *)malloc(sizeof(listint_t));

	new->n = n;
	new->next = head;
	head = new;
}
