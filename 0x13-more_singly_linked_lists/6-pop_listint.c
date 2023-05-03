#include "lists.h"
/**
 * pop_listint - deletes head node of linked list
 * @head: head of list
 * Return: head node data (n), 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int node_data = temp->n;

	if (*head == NULL)
	{
		return (0);
	}

	*head = temp->next;
	free(temp);
	return (node_data);
}
