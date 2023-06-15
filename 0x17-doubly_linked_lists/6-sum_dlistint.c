#include "lists.h"

/**
 * sum_dlistint - a function that sum all data in list
 * @head: a pointer to the first node
 *
 * Return: return sum of data
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);

}
