#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: a pointer of the first node in the linked list
 * Return: return the address of the node where the loop starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head;
	listint_t *arr[1024];
	size_t len = 0, i;

	if (!head)
	{
		return (NULL);
	}
	while (temp)
	{
		for (i = 0 ; i < len ; i++)
			if (arr[i] == temp)
			{
				return (temp);
			}
		arr[len] = temp;
		len++;
		temp = temp->next;
	}
	return (temp);
}
