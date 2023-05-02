#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head of the list
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *free_mem;

	while (head != NULL)
	{
		free_mem = head->next;
		free(head);
		head = free_mem;
	}
}
