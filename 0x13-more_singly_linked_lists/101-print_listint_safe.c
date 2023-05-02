#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: a pointer of the first node in the linked list
 * Return: number of nodes in list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	const listint_t *arr[1024];
	size_t len = 0, i;

	if (!head)
		exit(98);

	while (temp)
	{
		for (i = 0; i < len; i++)
			if (arr[i] == temp)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (len);
			}
		arr[len] = temp;
		len++;

		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
	}

	return (len);
}
