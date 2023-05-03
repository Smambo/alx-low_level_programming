#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index of linked list
 * @head: head of list
 * @index: node index
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp = *head;
	listint_t *node_delete;

	if (*head == NULL)
	{
		return (-1);
	}

	count = 0;

	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	} else
	{
		while (temp != NULL && count != index - 1)
		{
			count++;
			temp = temp->next;
		}
		if (count == index - 1)
		{
			node_delete = temp->next;
			temp->next = temp->next->next;
			free(node_delete);
			return (1);
		} else
		{
			return (-1);
		}
	}
}
