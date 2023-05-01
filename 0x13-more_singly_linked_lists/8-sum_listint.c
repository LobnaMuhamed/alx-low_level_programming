#include "lists.h"

/**
 * sum_listint - to sum all of data (n) of list
 * @head: a pointer for the first element
 * Return: return sum or 0
*/

int sum_listint(listint_t *head)
{
	int i, sum = 0;
	listint_t *temp = head;

	for (i = 0 ; temp ; i++)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
