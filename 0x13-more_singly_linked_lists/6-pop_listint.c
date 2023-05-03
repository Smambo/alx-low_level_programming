#include "lists.h"
/**
 * pop_listint - deletes head node of linked list
 * @head: head of list
 * Return: head node data (n), 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int ret = 0;
	listint_t *temp;

	if (*head == NULL)
	{
		return (ret);
	}

	temp = *head;
	ret = temp->n;
	free(*head);
	*head = temp->next;
	return (ret);
}
