#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key being looked for
 * Return: value associated with the element,
 * otherwise NULL if no key found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *check;
	unsigned long int index, key_index;

	if (!ht || ht->size == 0 || strlen(key) == 0)
		return (NULL);

	key_index = hash_djb2((const unsigned char *)key);
	index = key_index % ht->size;
	check = ht->array[index];
	while (check)
	{
		if (!strcmp(check->key, key))
			return (check->value);
		check = check->next;
	}
	return (NULL);
}
