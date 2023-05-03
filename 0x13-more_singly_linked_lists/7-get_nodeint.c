#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of linked list
 * @head: head of the list
 * @index: node index
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	for (i = 0; temp != NULL; i++)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
	}
	return (NULL);
}
