#include "hash_tables.h"
/**
 * hash_table_delete - Deletes hash table.
 * @ht: Pointer to hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *ptr, *node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				ptr = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = ptr;
			}
		}
	}
	free(h->array);
	free(h);
}
