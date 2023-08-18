#include  "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: head of list
 * @idx: index where node should be inserted
 * @n: value of node
 * Return: address of new node, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 1;
	dlistint_t *temp, *new;

	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*h == NULL)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		return (NULL);
	}
	while (temp->next != NULL && index != idx)
	{
		temp = temp->next;
		index++;
	}
	if (index == idx)
	{
		new->prev = temp;
		new->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = new;
		temp->next = new;
		return (new);
	}
	return (NULL);
}
