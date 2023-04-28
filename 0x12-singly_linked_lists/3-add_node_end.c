#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds new node to end of a list
 * @head: head of list
 * @str: string to be duplicated
 * Return: address of new element, otherwise NULL if unsuccessful
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node, *last_node;

	while (str[i])
	{
		i++;
	}
	new_node = malloc(sizeof(list_t));

	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = i;
		new_node->next = NULL;
	} else
		return (NULL);
	if (strdup(str) == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (*head != NULL)
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
		return (new_node);
	}
	else
	{
		*head = new_node;
		return (new_node);
	}
}
