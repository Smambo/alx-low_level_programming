#include "lists.h"
/**
 * add_nodeint_end - adds new node to end of a list
 * @head: head of list
 * @n: new node value
 * Return: address of new element, otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	} else
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		return (new_node);
	}
	else
	{
		*head = new_node;
		return (new_node);
	}
}
