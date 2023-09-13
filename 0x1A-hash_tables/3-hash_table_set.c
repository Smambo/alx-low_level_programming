#include "hash_tables.h"
/**
 * hash_table_set - adds element to hash table
 * @ht: hash table to be updated
 * @key: key to be added in the array
 * @value: value associated with the key
 * Return: 1 on success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *check;
	unsigned long int index;

	if (!ht || !ht->size || !strlen(key))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	check = ht->array[index];
	while (check)
	{
		if (!strcmp(check->key, key))
		{
			free(check->value);
			check->value = strdup((char *)value);
			if (!check->value)
				return (0);
			return (1);
		}
		check = check->next;
	}
	new = malloc(sizeof(hash_node_t));
	new->value = strdup((char *)value);
	if (!new->value)
	{
		free(new->value);
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
