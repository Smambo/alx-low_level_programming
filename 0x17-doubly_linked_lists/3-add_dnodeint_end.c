#include "lists.h"

/**
 * add_dnodeint_end - adds new node at end of a list
 * @head: head of list
 * @n: node value
 * Return: address of new element, otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	new->prev = temp;
	temp->next = new;
	return (new);
}
