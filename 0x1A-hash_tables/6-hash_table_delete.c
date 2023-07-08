#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: is the hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item;
	unsigned long int i = 0;

	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item)
		{
			free(item->key);
			free(item->value);
			free(item);
			item = item->next;
		}
	}
	free(ht->array);
	free(ht);
}
