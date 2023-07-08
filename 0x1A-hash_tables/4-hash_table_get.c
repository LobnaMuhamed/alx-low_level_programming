#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with element
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (!ht || !key || (*key) == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	item = ht->array[index];

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
