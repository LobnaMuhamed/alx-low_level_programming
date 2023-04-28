#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: head value
 * @str: string
 * Return: return address of newNode
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp;
	unsigned int len = 0;

	temp = *head;

	while (str[len])
		len++;
	newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = newNode;
	return (newNode);
}
