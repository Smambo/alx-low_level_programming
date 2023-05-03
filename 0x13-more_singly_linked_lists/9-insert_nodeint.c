#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: head of the list
 * @idx: list index of new node
 * @n: value of head of list
 * Return: address of new node, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (count != idx - 1 && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	} else
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
