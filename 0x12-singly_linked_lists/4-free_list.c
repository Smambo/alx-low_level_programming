#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *free_mem;

	while (head != NULL)
	{
		free_mem = head->next;
		free(head->str);
		free(head);
		head = free_mem;
	}
}
