#include "hash_tables.h"
/**
 *hash_table_print - Prints hash table
 *@ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *mynode;
unsigned long int i = 0, count = 0;

if (ht != NULL)
{
printf("{");
for (count = 0; count < ht->size; count++)
{
mynode = ht->array[count];
while (mynode != NULL)
{
if (i != 0)
printf(", ");
i = 1;
printf("'%s': '%s'", mynode->key, mynode->value);
mynode = mynode->next;
}
}
printf("}\n");
}
}
