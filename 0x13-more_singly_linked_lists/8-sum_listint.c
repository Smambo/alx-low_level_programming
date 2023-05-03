#include "lists.h"
/**
 * sum_listint - returns sum of all data of list
 * @head: head of list
 * Return: sum of list data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
