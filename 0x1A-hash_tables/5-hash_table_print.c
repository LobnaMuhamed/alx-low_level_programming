#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: is the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item;
	int comma_flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item)
		{
			if (comma_flag)
				printf(", ");
			printf("'%s': '%s'", item->key, item->value);
			comma_flag = 1;
			item = item->next;
		}
	}
	printf("}\n");
}
