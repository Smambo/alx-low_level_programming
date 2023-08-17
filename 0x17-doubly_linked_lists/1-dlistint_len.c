#include "lists.h"

/**
 * dlistint_len - function returns number of elements in list
 * @h: head of list
 * Return: number of elements(nodes)
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
