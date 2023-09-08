#include "hash_tables.h"
/**
 * key_index - returns the index of a key
 * @key: the key in the array
 * @size: size of the array
 * Return: index at which key/value pair should be
 * stored in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
