#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: head of the list
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;
		current->next = prev_node;
		prev_node = current;
		current = next;		
	}
	*head = prev_node;
	return (*head);
}
