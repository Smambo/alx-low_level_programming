#include "lists.h"

/**
 * print_dlistint - prints all elements of list
 * @h: head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
