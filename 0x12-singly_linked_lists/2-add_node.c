#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: head value
 * @str: string
 * Return: return pointer
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = NULL;

	unsigned int len = 0;

	while (str[len])
		len++;
	newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
