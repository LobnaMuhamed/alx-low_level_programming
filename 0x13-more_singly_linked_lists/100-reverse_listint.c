#include "lists.h"

/**
 * recursion - a function to reverse a linked list
 * @current: original linked list
 * @rev: reverse linked list
 * Return: return reverse list
*/

listint_t *recursion(listint_t *current, listint_t *rev)
{
	listint_t *temp;

	if (current == NULL)
		return (rev);

	temp = current->next;
	current->next = rev;
	rev = current;
	current = temp;

	return (recursion(current, rev));
}
/**
 * reverse_listint - a function that reverses a list
 * @head: a pointer of the first node
 * Return: return a pointer to the first node of reverse list
*/
listint_t *reverse_listint(listint_t **head)
{
	*head = recursion(*head, NULL);

	return (*head);
}
