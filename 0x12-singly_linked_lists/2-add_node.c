#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds new node to the beginning of a list
 * @head: head of list
 * @str: string to be duplicated
 * Return: address of new element, otherwise NULL if unsuccessful
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node;

	while (str[i])
	{
		i++;
	}
	new_node = malloc(sizeof(list_t));

	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = i;
		new_node->next = *head;

		*head = new_node;
		return (new_node);
	}
	else
	{
		return (NULL);
	}
}
