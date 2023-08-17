#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of linked list
 * @head: head of list
 * @index: index of node to get
 * Return: node otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int index_b = 0;

	temp = head;
	if (head == NULL)
		return (NULL);
	while (temp != NULL && index_b != index)
	{
		temp = temp->next;
		index_b++;
	}
	if (index == index_b)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
