#include "lists.h"

/**
 * sum_dlistint - sum of all data (n) of a linked list
 * @head: head of list
 * Return: sum of all data, otherwise return 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
