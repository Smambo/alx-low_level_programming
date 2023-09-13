#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *print;
	unsigned long int i, j;

	if (ht == NULL)
		return ;

	else
	{
		printf("{");

		for (i = 0; i < ht->size; i++)
		{
			print = ht->array[i];
			if (print != NULL)
			{
				j = 0;
				if (j)
					printf(", ");
				if (ht->array[i])
				{
					printf("'%s': '%s'", print->key, print->value);
					j = 1;
				}
				print = print->next;
			}
		}
		printf("}");
		printf("\n");
	}
}
