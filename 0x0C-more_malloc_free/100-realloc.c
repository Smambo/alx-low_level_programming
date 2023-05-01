#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of previously allocated memory space
 * @new_size: size of new memory block
 * Return: ptr to new memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copied_mem;
	void *ptr_new = malloc(new_size);

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size < new_size)
	{
		copied_mem = old_size;
	} else
	{
		copied_mem = new_size;
	}
	if (ptr_new != NULL)
	{
		memcpy(ptr_new, ptr, copied_mem);
	}
	free(ptr);
	return (ptr_new);
}
