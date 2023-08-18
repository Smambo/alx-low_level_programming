#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head of list
 * @index: index to delete node at
 * Return: On success 1, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *temp;
	
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			free(*head);
			*head = (*head)->next;
			(*head)->prev = NULL;
			return (1);
		}
		free(*head);
		(*head) = NULL;
		return (1);
	}
	temp = *head;
	while (temp->next && idx != index)
	{
		idx++;
		temp = temp->next;
	}
	if (idx == index)
	{
		if (temp->next != NULL)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
		}
		else
		{
			temp->prev->next = NULL;
			free(temp);
		}
		return (1);
	}
	return (-1);
}
