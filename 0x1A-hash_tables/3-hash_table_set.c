#include "hash_tables.h"

/**
 * add_node - a function that adds node or compare value of list
 * @head: a pointer to first node
 * @key: is a key
 * @value: is a value of the key
 *
 * Return: return address of the first node at the list
*/

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *temp;
	hash_node_t *new = (hash_node_t *)malloc(sizeof(hash_node_t));

	new->key = (char *)malloc(strlen(key) + 1);
	new->value = (char *)malloc(strlen(value) + 1);
	if (!new)
		return (NULL);

	strcpy(new->key, key);
	strcpy(new->value, value);
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (*head);
	}
	temp = *head;
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = new->value;
			free(new->key);
			free(new);
			return (*head);
		}
		temp = temp->next;
	}
	new->next = *head;
	*head = new;
	return (*head);
}
/**
 * hash_table_set - that adds an element to the hash table
 * @ht: isthe hash table you want to add or update value
 * @key: key can't be an empty string
 * @value: value associated with the key. value must be duplicated
 * can be an empty string
 * Return: 1 is succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	if (add_node(&(ht->array[index]), key, value) == NULL)
		return (0);
	return (1);
}


