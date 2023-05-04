#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: a pointer of the first node in the linked list
 * Return: return the address of the node where the loop starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *arr[1024];
	size_t i, j = 0;

	if (!head)
	{
		return (NULL);
	}
	while (head)
	{
		for (i = 0 ; i < j ; i++)
			if (arr[i] == head)
			{
				return (head);
			}
		arr[j] = head;
		head = head->next;
		j++;
	}
	return (head);
}
