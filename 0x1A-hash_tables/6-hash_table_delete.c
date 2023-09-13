#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *free_nodes;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		free_nodes = ht->array[i];
		while (free_nodes != NULL)
		{
			temp = free_nodes->next;
			free(free_nodes->key);
			free(free_nodes->value);
			free(free_nodes);
			free_nodes = temp;
		}
	}
	free(ht->array);
	free(ht);
}
