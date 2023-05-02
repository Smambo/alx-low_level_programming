#include "lists.h"
/**
 * listint_len - returns number of elements in a linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
