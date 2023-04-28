#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
